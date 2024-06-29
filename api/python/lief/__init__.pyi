from typing import Any, ClassVar, Optional, Union

from . import ART, Android, DEX, ELF, MachO, OAT, PE, VDEX, logging # type: ignore
from typing import overload
import io
import lief # type: ignore
import lief.Binary # type: ignore
import lief.ELF # type: ignore
import lief.Function # type: ignore
import lief.MachO # type: ignore
import lief.PE # type: ignore
import lief.logging # type: ignore
import os

class ARCHITECTURES:
    ARM: ClassVar[ARCHITECTURES] = ...
    ARM64: ClassVar[ARCHITECTURES] = ...
    INTEL: ClassVar[ARCHITECTURES] = ...
    LOONGARCH: ClassVar[ARCHITECTURES] = ...
    MIPS: ClassVar[ARCHITECTURES] = ...
    NONE: ClassVar[ARCHITECTURES] = ...
    PPC: ClassVar[ARCHITECTURES] = ...
    RISCV: ClassVar[ARCHITECTURES] = ...
    SPARC: ClassVar[ARCHITECTURES] = ...
    SYSZ: ClassVar[ARCHITECTURES] = ...
    X86: ClassVar[ARCHITECTURES] = ...
    XCORE: ClassVar[ARCHITECTURES] = ...
    __name__: str
    def __init__(self, *args, **kwargs) -> None: ...
    @staticmethod
    def from_value(arg: int, /) -> lief.ARCHITECTURES: ...
    def __ge__(self, other) -> bool: ...
    def __gt__(self, other) -> bool: ...
    def __hash__(self) -> int: ...
    def __index__(self) -> Any: ...
    def __int__(self) -> int: ...
    def __le__(self, other) -> bool: ...
    def __lt__(self, other) -> bool: ...
    @property
    def value(self) -> int: ...

class Binary(Object):
    class FORMATS:
        ELF: ClassVar[Binary.FORMATS] = ...
        MACHO: ClassVar[Binary.FORMATS] = ...
        OAT: ClassVar[Binary.FORMATS] = ...
        PE: ClassVar[Binary.FORMATS] = ...
        UNKNOWN: ClassVar[Binary.FORMATS] = ...
        __name__: str
        def __init__(self, *args, **kwargs) -> None: ...
        def __ge__(self, other) -> bool: ...
        def __gt__(self, other) -> bool: ...
        def __hash__(self) -> int: ...
        def __index__(self) -> Any: ...
        def __int__(self) -> int: ...
        def __le__(self, other) -> bool: ...
        def __lt__(self, other) -> bool: ...

    class VA_TYPES:
        AUTO: ClassVar[Binary.VA_TYPES] = ...
        RVA: ClassVar[Binary.VA_TYPES] = ...
        VA: ClassVar[Binary.VA_TYPES] = ...
        __name__: str
        def __init__(self, *args, **kwargs) -> None: ...
        def __ge__(self, other) -> bool: ...
        def __gt__(self, other) -> bool: ...
        def __hash__(self) -> int: ...
        def __index__(self) -> Any: ...
        def __int__(self) -> int: ...
        def __le__(self, other) -> bool: ...
        def __lt__(self, other) -> bool: ...

    class it_relocations:
        def __init__(self, *args, **kwargs) -> None: ...
        def __getitem__(self, arg: int, /) -> lief.Relocation: ...
        def __iter__(self) -> lief.Binary.it_relocations: ...
        def __len__(self) -> int: ...
        def __next__(self) -> lief.Relocation: ...

    class it_sections:
        def __init__(self, *args, **kwargs) -> None: ...
        def __getitem__(self, arg: int, /) -> lief.Section: ...
        def __iter__(self) -> lief.Binary.it_sections: ...
        def __len__(self) -> int: ...
        def __next__(self) -> lief.Section: ...

    class it_symbols:
        def __init__(self, *args, **kwargs) -> None: ...
        def __getitem__(self, arg: int, /) -> lief.Symbol: ...
        def __iter__(self) -> lief.Binary.it_symbols: ...
        def __len__(self) -> int: ...
        def __next__(self) -> lief.Symbol: ...
    def __init__(self, *args, **kwargs) -> None: ...
    def get_content_from_virtual_address(self, virtual_address: int, size: int, va_type: lief.Binary.VA_TYPES = ...) -> memoryview: ...
    def get_function_address(self, function_name: str) -> Union[int,lief.lief_errors]: ...
    def get_symbol(self, symbol_name: str) -> lief.Symbol: ...
    def has_symbol(self, symbol_name: str) -> bool: ...
    def offset_to_virtual_address(self, offset: int, slide: int = ...) -> Union[int,lief.lief_errors]: ...
    @overload
    def patch_address(self, address: int, patch_value: list[int], va_type: lief.Binary.VA_TYPES = ...) -> None: ...
    @overload
    def patch_address(self, address: int, patch_value: int, size: int = ..., va_type: lief.Binary.VA_TYPES = ...) -> None: ...
    def remove_section(self, name: str, clear: bool = ...) -> None: ...
    def xref(self, virtual_address: int) -> list[int]: ...
    @property
    def abstract(self) -> lief.Binary: ...
    @property
    def concrete(self) -> lief.ELF.Binary | lief.PE.Binary | lief.MachO.Binary: ...
    @property
    def ctor_functions(self) -> list[lief.Function]: ...
    @property
    def entrypoint(self) -> int: ...
    @property
    def exported_functions(self) -> list[lief.Function]: ...
    @property
    def format(self) -> lief.Binary.FORMATS: ...
    @property
    def has_nx(self) -> bool: ...
    @property
    def header(self) -> lief.Header: ...
    @property
    def imagebase(self) -> int: ...
    @property
    def imported_functions(self) -> list[lief.Function]: ...
    @property
    def is_pie(self) -> bool: ...
    @property
    def libraries(self) -> list[Union[str,bytes]]: ...
    @property
    def original_size(self) -> int: ...
    @property
    def relocations(self) -> lief.Binary.it_relocations: ...
    @property
    def sections(self) -> lief.Binary.it_sections: ...
    @property
    def symbols(self) -> lief.Binary.it_symbols: ...

class ENDIANNESS:
    BIG: ClassVar[ENDIANNESS] = ...
    LITTLE: ClassVar[ENDIANNESS] = ...
    NONE: ClassVar[ENDIANNESS] = ...
    __name__: str
    def __init__(self, *args, **kwargs) -> None: ...
    @staticmethod
    def from_value(arg: int, /) -> lief.ENDIANNESS: ...
    def __ge__(self, other) -> bool: ...
    def __gt__(self, other) -> bool: ...
    def __hash__(self) -> int: ...
    def __index__(self) -> Any: ...
    def __int__(self) -> int: ...
    def __le__(self, other) -> bool: ...
    def __lt__(self, other) -> bool: ...
    @property
    def value(self) -> int: ...

class Function(Symbol):
    class FLAGS:
        CONSTRUCTOR: ClassVar[Function.FLAGS] = ...
        DEBUG_INFO: ClassVar[Function.FLAGS] = ...
        DESTRUCTOR: ClassVar[Function.FLAGS] = ...
        EXPORTED: ClassVar[Function.FLAGS] = ...
        IMPORTED: ClassVar[Function.FLAGS] = ...
        __name__: str
        def __init__(self, *args, **kwargs) -> None: ...
        def __ge__(self, other) -> bool: ...
        def __gt__(self, other) -> bool: ...
        def __hash__(self) -> int: ...
        def __index__(self) -> Any: ...
        def __int__(self) -> int: ...
        def __le__(self, other) -> bool: ...
        def __lt__(self, other) -> bool: ...
    address: int
    @overload
    def __init__(self) -> None: ...
    @overload
    def __init__(self, arg: str, /) -> None: ...
    @overload
    def __init__(self, arg: int, /) -> None: ...
    @overload
    def __init__(self, arg0: str, arg1: int, /) -> None: ...
    def add(self, flag: lief.Function.FLAGS) -> lief.Function: ...
    @property
    def flags(self) -> list[lief.Function.FLAGS]: ...

class Header(Object):
    architecture: lief.ARCHITECTURES
    endianness: lief.ENDIANNESS
    entrypoint: int
    modes: set[lief.MODES]
    object_type: lief.OBJECT_TYPES
    def __init__(self) -> None: ...
    @property
    def is_32(self) -> bool: ...
    @property
    def is_64(self) -> bool: ...

class MODES:
    ARM: ClassVar[MODES] = ...
    M16: ClassVar[MODES] = ...
    M32: ClassVar[MODES] = ...
    M64: ClassVar[MODES] = ...
    MCLASS: ClassVar[MODES] = ...
    MIPS3: ClassVar[MODES] = ...
    MIPS32: ClassVar[MODES] = ...
    MIPS32R6: ClassVar[MODES] = ...
    MIPS64: ClassVar[MODES] = ...
    MIPSGP64: ClassVar[MODES] = ...
    NONE: ClassVar[MODES] = ...
    THUMB: ClassVar[MODES] = ...
    UNDEFINED: ClassVar[MODES] = ...
    V7: ClassVar[MODES] = ...
    V8: ClassVar[MODES] = ...
    V9: ClassVar[MODES] = ...
    __name__: str
    def __init__(self, *args, **kwargs) -> None: ...
    @staticmethod
    def from_value(arg: int, /) -> lief.MODES: ...
    def __ge__(self, other) -> bool: ...
    def __gt__(self, other) -> bool: ...
    def __hash__(self) -> int: ...
    def __index__(self) -> Any: ...
    def __int__(self) -> int: ...
    def __le__(self, other) -> bool: ...
    def __lt__(self, other) -> bool: ...
    @property
    def value(self) -> int: ...

class OBJECT_TYPES:
    EXECUTABLE: ClassVar[OBJECT_TYPES] = ...
    LIBRARY: ClassVar[OBJECT_TYPES] = ...
    NONE: ClassVar[OBJECT_TYPES] = ...
    OBJECT: ClassVar[OBJECT_TYPES] = ...
    __name__: str
    def __init__(self, *args, **kwargs) -> None: ...
    @staticmethod
    def from_value(arg: int, /) -> lief.OBJECT_TYPES: ...
    def __ge__(self, other) -> bool: ...
    def __gt__(self, other) -> bool: ...
    def __hash__(self) -> int: ...
    def __index__(self) -> Any: ...
    def __int__(self) -> int: ...
    def __le__(self, other) -> bool: ...
    def __lt__(self, other) -> bool: ...
    @property
    def value(self) -> int: ...

class Object:
    def __init__(self, *args, **kwargs) -> None: ...
    def __hash__(self) -> int: ...

class PLATFORMS:
    ANDROID: ClassVar[PLATFORMS] = ...
    IOS: ClassVar[PLATFORMS] = ...
    LINUX: ClassVar[PLATFORMS] = ...
    OSX: ClassVar[PLATFORMS] = ...
    UNKNOWN: ClassVar[PLATFORMS] = ...
    WINDOWS: ClassVar[PLATFORMS] = ...
    __name__: str
    def __init__(self, *args, **kwargs) -> None: ...
    @staticmethod
    def from_value(arg: int, /) -> lief.PLATFORMS: ...
    def __ge__(self, other) -> bool: ...
    def __gt__(self, other) -> bool: ...
    def __hash__(self) -> int: ...
    def __index__(self) -> Any: ...
    def __int__(self) -> int: ...
    def __le__(self, other) -> bool: ...
    def __lt__(self, other) -> bool: ...
    @property
    def value(self) -> int: ...

class Relocation(Object):
    address: int
    size: int
    def __init__(self, *args, **kwargs) -> None: ...

class Section(Object):
    content: memoryview
    name: Union[str,bytes]
    offset: int
    size: int
    virtual_address: int
    def __init__(self, *args, **kwargs) -> None: ...
    @overload
    def search(self, number: int, pos: int = ..., size: int = ...) -> Optional[int]: ...
    @overload
    def search(self, str: str, pos: int = ...) -> Optional[int]: ...
    @overload
    def search(self, bytes: bytes, pos: int = ...) -> Optional[int]: ...
    @overload
    def search_all(self, number: int, size: int = ...) -> list[int]: ...
    @overload
    def search_all(self, str: str) -> list[int]: ...
    @property
    def entropy(self) -> float: ...
    @property
    def fullname(self) -> bytes: ...

class Symbol(Object):
    name: Union[str,bytes]
    size: int
    value: int
    def __init__(self, *args, **kwargs) -> None: ...

class lief_errors:
    asn1_bad_tag: ClassVar[lief_errors] = ...
    build_error: ClassVar[lief_errors] = ...
    conversion_error: ClassVar[lief_errors] = ...
    corrupted: ClassVar[lief_errors] = ...
    data_too_large: ClassVar[lief_errors] = ...
    file_error: ClassVar[lief_errors] = ...
    file_format_error: ClassVar[lief_errors] = ...
    not_found: ClassVar[lief_errors] = ...
    not_implemented: ClassVar[lief_errors] = ...
    not_supported: ClassVar[lief_errors] = ...
    parsing_error: ClassVar[lief_errors] = ...
    read_error: ClassVar[lief_errors] = ...
    read_out_of_bound: ClassVar[lief_errors] = ...
    __name__: str
    def __init__(self, *args, **kwargs) -> None: ...
    def __ge__(self, other) -> bool: ...
    def __gt__(self, other) -> bool: ...
    def __hash__(self) -> int: ...
    def __index__(self) -> Any: ...
    def __int__(self) -> int: ...
    def __le__(self, other) -> bool: ...
    def __lt__(self, other) -> bool: ...

class ok_error_t:
    def __init__(self, *args, **kwargs) -> None: ...
    def __bool__(self) -> bool: ...
    @property
    def error(self) -> lief_errors: ...
    @property
    def is_error(self) -> bool: ...
    @property
    def is_value(self) -> bool: ...
    @property
    def value(self) -> lief.ok_t: ...

class ok_t:
    def __init__(self, *args, **kwargs) -> None: ...
    def __bool__(self) -> bool: ...

def current_platform() -> lief.PLATFORMS: ...
def disable_leak_warning() -> None: ...
@overload
def hash(arg: lief.Object, /) -> int: ...
@overload
def hash(arg: list[int], /) -> int: ...
@overload
def hash(arg: bytes, /) -> int: ...
@overload
def hash(arg: str, /) -> int: ...
@overload
def is_art(path: str) -> bool: ...
@overload
def is_art(raw: list[int]) -> bool: ...
@overload
def is_dex(path: str) -> bool: ...
@overload
def is_dex(raw: list[int]) -> bool: ...
@overload
def is_elf(filename: str) -> bool: ...
@overload
def is_elf(raw: list[int]) -> bool: ...
@overload
def is_macho(filename: str) -> bool: ...
@overload
def is_macho(raw: list[int]) -> bool: ...
@overload
def is_oat(binary: lief.ELF.Binary) -> bool: ...
@overload
def is_oat(path: str) -> bool: ...
@overload
def is_oat(raw: list[int]) -> bool: ...
@overload
def is_pe(file: str) -> bool: ...
@overload
def is_pe(raw: list[int]) -> bool: ...
@overload
def is_vdex(path: str) -> bool: ...
@overload
def is_vdex(raw: list[int]) -> bool: ...
@overload
def parse(raw: bytes) -> Optional[lief.Binary]: ...
@overload
def parse(filepath: str) -> Optional[lief.Binary]: ...
@overload
def parse(obj: Union[io.IOBase|os.PathLike]) -> Optional[lief.Binary]: ...
def to_json(arg: lief.Object, /) -> str: ...
