<p align="center" >
<img width="90%" src="https://github.com/lief-project/LIEF/blob/master/.github/images/architecture.png"/><br />
</p>

<p align="center">
  <a href="https://gitter.im/lief-project">
    <img src="https://img.shields.io/gitter/room/gitterHQ/gitter.svg?style=flat-square">
  </a>
  &nbsp;
  <a href="https://github.com/lief-project/LIEF/actions?query=workflow%3A%22Linux+x86-64%22">
    <img alt="Linux x86-64 CI status" src="https://img.shields.io/github/actions/workflow/status/lief-project/LIEF/linux-x86-64.yml?branch=master&label=Linux%20x86-64&logo=github">
  </a>
  &nbsp;
  <a href="https://github.com/lief-project/LIEF/actions?query=workflow%3A%22Linux+AArch64%22">
    <img alt="Linux AArch64 CI status" src="https://img.shields.io/github/actions/workflow/status/lief-project/LIEF/linux-aarch64.yml?branch=master&label=Linux%20AArch64&logo=github">
  </a>
  &nbsp;
  <a href="https://github.com/lief-project/LIEF/actions?query=workflow%3AAndroid">
    <img alt="Android CI status" src="https://img.shields.io/github/actions/workflow/status/lief-project/LIEF/android.yml?branch=master&label=Android&logo=github">
  </a>
  &nbsp;
  <a href="https://github.com/lief-project/LIEF/actions?query=workflow%3AmacOS">
    <img alt="macOS CI status" src="https://img.shields.io/github/actions/workflow/status/lief-project/LIEF/osx.yml?branch=master&label=macOS&logo=github">
  </a>
  &nbsp;
  <a href="https://github.com/lief-project/LIEF/actions?query=workflow%3AiOS">
    <img alt="iOS CI status" src="https://img.shields.io/github/actions/workflow/status/lief-project/LIEF/ios.yml?branch=master&label=iOS&logo=github">
  </a>
  &nbsp;
  <a href="https://github.com/lief-project/LIEF/actions/workflows/windows-x64-all.yml">
    <img alt="Windows CI status" src="https://img.shields.io/github/actions/workflow/status/lief-project/LIEF/windows-x64-all.yml?branch=master&label=Windows&logo=github">
  </a>
  &nbsp;
  <a href="https://github.com/lief-project/LIEF/releases">
    <img src="https://img.shields.io/github/v/release/lief-project/LIEF?style=flat-square">
  </a>
  &nbsp;
  <a href="https://twitter.com/LIEF_project">
   <img alt="Twitter Follow" src="https://img.shields.io/twitter/follow/lief_project?color=1da1f2&label=Follow&logo=twitter&logoColor=white&style=flat-square">
  </a>
</p>

<br />
<p align="center">
  <a href="https://lief-project.github.io/blog/"><b>Blog</b></a> •
  <a href="https://lief-project.github.io/doc/latest/index.html"><b>Documentation</b></a> •
  <a href="#about-A"><b>About</b></a>
</p>
<br />

# About

The purpose of this project is to provide a cross platform library which can parse,
modify and abstract ELF, PE and MachO formats.

Main features:

  * **Parsing**: LIEF can parse ELF, PE, MachO, OAT, DEX, VDEX, ART and provides an user-friendly API to access to format internals.
  * **Modify**: LIEF enables to modify some parts of these formats
  * **Abstract**: Three formats have common features like sections, symbols, entry point... LIEF factors them.
  * **API**: LIEF can be used in C, C++ and Python

# Content

- [About](#about)
- [Download / Install](#downloads--install)
- [Getting started](#getting-started)
- [Documentation](#documentation)
  - [Sphinx](https://lief-project.github.io/doc/stable/index.html)
  - [Doxygen](https://lief-project.github.io/doc/latest/doxygen/index.html)
  - Tutorials:
    - [Parse and manipulate formats](https://lief-project.github.io/doc/latest/tutorials/01_play_with_formats.html)
    - [Create a PE from scratch](https://lief-project.github.io/doc/latest/tutorials/02_pe_from_scratch.html)
    - [Play with ELF symbols](https://lief-project.github.io/doc/latest/tutorials/03_elf_change_symbols.html)
    - [ELF Hooking](https://lief-project.github.io/doc/latest/tutorials/04_elf_hooking.html)
    - [Infecting the plt/got](https://lief-project.github.io/doc/latest/tutorials/05_elf_infect_plt_got.html)
    - [PE Hooking](https://lief-project.github.io/doc/latest/tutorials/06_pe_hooking.html)
    - [PE Resources](https://lief-project.github.io/doc/latest/tutorials/07_pe_resource.html)
    - [Transforming an ELF executable into a library](https://lief-project.github.io/doc/latest/tutorials/08_elf_bin2lib.html)
    - [How to use frida on a non-rooted device](https://lief-project.github.io/doc/latest/tutorials/09_frida_lief.html)
    - [Android formats](https://lief-project.github.io/doc/latest/tutorials/10_android_formats.html)
    - [Mach-O modification](https://lief-project.github.io/doc/latest/tutorials/11_macho_modification.html)
    - [ELF Coredump](https://lief-project.github.io/doc/latest/tutorials/12_elf_coredump.html)
    - [PE Authenticode](https://lief-project.github.io/doc/latest/tutorials/13_pe_authenticode.html)
- [Contact](#contact)
- [About](#about)
  - [Authors](#authors)
  - [License](#license)
  - [Bibtex](#bibtex)

## Downloads / Install

First, make sure to have an updated version of setuptools:

```console
pip install setuptools --upgrade
```

To install the latest **version** (release):

```console
pip install lief
```

To install nightly build:

```console
pip install [--user] --index-url https://lief.s3-website.fr-par.scw.cloud/latest lief==0.13.0.dev0
```

### Packages

- **Nightly**:
  * SDK: https://lief.s3-website.fr-par.scw.cloud/latest/sdk
  * Python Wheels: https://lief.s3-website.fr-par.scw.cloud/latest/lief
- **v0.12.3**: https://github.com/lief-project/LIEF/releases/tag/0.12.3

Here are guides to install or integrate LIEF:

  * [Python](https://lief-project.github.io/doc/latest/installation.html#python)
  * [VisualStudio](https://lief-project.github.io/doc/latest/installation.html#visual-studio-integration)
  * [XCode](https://lief-project.github.io/doc/latest/installation.html#xcode-integration)
  * [CMake](https://lief-project.github.io/doc/latest/installation.html#cmake-integration)

## Getting started

### Python

```python
import lief

# ELF
binary = lief.parse("/usr/bin/ls")
print(binary)

# PE
binary = lief.parse("C:\\Windows\\explorer.exe")
print(binary)

# Mach-O
binary = lief.parse("/usr/bin/ls")
print(binary)
```

### C++

```cpp
#include <LIEF/LIEF.hpp>

int main(int argc, char** argv) {
  // ELF
  if (std::unique_ptr<const LIEF::ELF::Binary> elf = LIEF::ELF::Parser::parse("/bin/ls")) {
    std::cout << *elf << '\n';
  }

  // PE
  if (std::unique_ptr<const LIEF::PE::Binary> pe = LIEF::PE::Parser::parse("C:\\Windows\\explorer.exe")) {
    std::cout << *pe << '\n';
  }

  // Mach-O
  if (std::unique_ptr<LIEF::MachO::FatBinary> macho = LIEF::MachO::Parser::parse("/bin/ls")) {
    std::cout << *macho << '\n';
  }

  return 0;
}

```

### C (Limited API)

```cpp
#include <LIEF/LIEF.h>

int main(int argc, char** argv) {
  Elf_Binary_t* elf = elf_parse("/usr/bin/ls");

  Elf_Section_t** sections = elf->sections;

  for (size_t i = 0; sections[i] != NULL; ++i) {
    printf("%s\n", sections[i]->name);
  }

  elf_binary_destroy(elf);
  return 0;
}
```

## Documentation

* [Main documentation](https://lief-project.github.io/doc/latest/index.html)
* [Tutorial](https://lief-project.github.io/doc/latest/tutorials/index.html)
* [API](https://lief-project.github.io/doc/latest/api/index.html)
* [Doxygen](https://lief-project.github.io/doc/latest/doxygen/index.html)

## Contact

* **Mail**: contact at lief re
* **Gitter**: [lief-project](https://gitter.im/lief-project)

## About

### Authors

Romain Thomas ([@rh0main](https://twitter.com/rh0main)) - [Quarkslab](https://www.quarkslab.com)

### License

LIEF is provided under the [Apache 2.0 license](https://github.com/lief-project/LIEF/blob/0.12.3/LICENSE).

### Bibtex

```bibtex
@MISC {LIEF,
  author       = "Romain Thomas",
  title        = "LIEF - Library to Instrument Executable Formats",
  howpublished = "https://lief.quarkslab.com/",
  month        = "apr",
  year         = "2017"
}
```


