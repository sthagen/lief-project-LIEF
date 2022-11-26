#!/usr/bin/env python
# -*- coding: utf-8 -*-
import lief
import os
import sys
import stat
import subprocess
import time
import ctypes
import zipfile

from subprocess import Popen

from utils import get_sample

if sys.platform.startswith("win"):
    SEM_NOGPFAULTERRORBOX = 0x0002 # From MSDN
    ctypes.windll.kernel32.SetErrorMode(SEM_NOGPFAULTERRORBOX)

def test_add_multiples_sections(tmp_path):
    sample_file = get_sample('PE/PE32_x86_binary_Notepad++.zip')
    sample_dir  = tmp_path / "Notepad++"

    sample = sample_dir / "notepad++.exe"
    output = sample_dir / "notepad++_sections.exe"

    with zipfile.ZipFile(sample_file, 'r') as zip_ref:
        zip_ref.extractall(tmp_path)

    notepadpp = lief.parse(sample.as_posix())

    # Add 20 sections to the binary
    for i in range(20):
        section = lief.PE.Section(".section_{}".format(i))
        section.content = [i & 0xFF for i in range(0x200)]
        notepadpp.add_section(section)

    builder = lief.PE.Builder(notepadpp)
    builder.build()

    builder.write(output.as_posix())

    st = os.stat(output)
    os.chmod(output, st.st_mode | stat.S_IEXEC)

    if sys.platform.startswith("win"):
        subprocess_flags = 0x8000000 # win32con.CREATE_NO_WINDOW?
        p = Popen(["START", output.as_posix()], shell=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, creationflags=subprocess_flags)
        time.sleep(3)
        q = Popen(["taskkill", "/im", "notepad++_sections.exe"], shell=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)

        stdout, _ = p.communicate()
        print(stdout.decode("utf8"))

        stdout, _ = q.communicate()
        print(stdout.decode("utf8"))

        assert q.returncode == 0


def test_imports_notepadpp(tmp_path):
    sample_file = get_sample('PE/PE32_x86_binary_Notepad++.zip')
    sample_dir  = tmp_path / "Notepad++"

    sample = sample_dir / "notepad++.exe"
    output = sample_dir / "notepad++_imports.exe"

    with zipfile.ZipFile(sample_file, 'r') as zip_ref:
        zip_ref.extractall(tmp_path)

    notepadpp = lief.parse(sample.as_posix())

    # Disable ASLR
    notepadpp.optional_header.dll_characteristics &= ~lief.PE.DLL_CHARACTERISTICS.DYNAMIC_BASE

    # Disable NX protection
    notepadpp.optional_header.dll_characteristics &= ~lief.PE.DLL_CHARACTERISTICS.NX_COMPAT

    builder = lief.PE.Builder(notepadpp)
    builder.build_imports(True).patch_imports(True)
    builder.build()

    builder.write(output.as_posix())

    st = os.stat(output)
    os.chmod(output, st.st_mode | stat.S_IEXEC)

    if sys.platform.startswith("win"):
        subprocess_flags = 0x8000000 # win32con.CREATE_NO_WINDOW?
        p = Popen(["START", output.as_posix()], shell=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, creationflags=subprocess_flags)
        time.sleep(3)
        q = Popen(["taskkill", "/im", "notepad++_imports.exe"], shell=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)

        stdout, _ = p.communicate()
        print(stdout.decode("utf8"))

        stdout, _ = q.communicate()
        print(stdout.decode("utf8"))

        assert q.returncode == 0
