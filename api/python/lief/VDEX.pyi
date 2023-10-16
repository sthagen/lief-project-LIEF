from typing import Optional

from typing import overload
import lief.Android # type: ignore
import lief.DEX # type: ignore
import lief.OAT.Binary # type: ignore
import lief.VDEX # type: ignore

class File(lief.Object):
    class it_dex_files:
        def __init__(self, *args, **kwargs) -> None: ...
        def __getitem__(self, arg: int, /) -> lief.DEX.File: ...
        def __iter__(self) -> lief.OAT.Binary.it_dex_files: ...
        def __len__(self) -> int: ...
        def __next__(self) -> lief.DEX.File: ...
    def __init__(self, *args, **kwargs) -> None: ...
    @property
    def dex2dex_json_info(self) -> str: ...
    @property
    def dex_files(self) -> lief.OAT.Binary.it_dex_files: ...
    @property
    def header(self) -> lief.VDEX.Header: ...

class Header(lief.Object):
    def __init__(self, *args, **kwargs) -> None: ...
    @property
    def dex_size(self) -> int: ...
    @property
    def magic(self) -> list[int]: ...
    @property
    def nb_dex_files(self) -> int: ...
    @property
    def quickening_info_size(self) -> int: ...
    @property
    def verifier_deps_size(self) -> int: ...
    @property
    def version(self) -> int: ...

def android_version(vdex_version: int) -> lief.Android.ANDROID_VERSIONS: ...
@overload
def parse(filename: str) -> Optional[lief.VDEX.File]: ...
@overload
def parse(io: object, name: str = ...) -> object: ...
@overload
def version(file: str) -> int: ...
@overload
def version(raw: list[int]) -> int: ...
