from typing import Any, ClassVar, Optional, Union

from typing import overload
import io
import lief.DEX # type: ignore
import lief.DEX.Class # type: ignore
import lief.DEX.File # type: ignore
import lief.DEX.MapItem # type: ignore
import lief.DEX.MapList # type: ignore
import lief.DEX.Prototype # type: ignore
import lief.DEX.Type # type: ignore
import os

class ACCESS_FLAGS:
    ABSTRACT: ClassVar[ACCESS_FLAGS] = ...
    ANNOTATION: ClassVar[ACCESS_FLAGS] = ...
    BRIDGE: ClassVar[ACCESS_FLAGS] = ...
    CONSTRUCTOR: ClassVar[ACCESS_FLAGS] = ...
    DECLARED_SYNCHRONIZED: ClassVar[ACCESS_FLAGS] = ...
    ENUM: ClassVar[ACCESS_FLAGS] = ...
    FINAL: ClassVar[ACCESS_FLAGS] = ...
    INTERFACE: ClassVar[ACCESS_FLAGS] = ...
    NATIVE: ClassVar[ACCESS_FLAGS] = ...
    PRIVATE: ClassVar[ACCESS_FLAGS] = ...
    PROTECTED: ClassVar[ACCESS_FLAGS] = ...
    PUBLIC: ClassVar[ACCESS_FLAGS] = ...
    STATIC: ClassVar[ACCESS_FLAGS] = ...
    STRICT: ClassVar[ACCESS_FLAGS] = ...
    SYNCHRONIZED: ClassVar[ACCESS_FLAGS] = ...
    SYNTHETIC: ClassVar[ACCESS_FLAGS] = ...
    TRANSIENT: ClassVar[ACCESS_FLAGS] = ...
    UNKNOWN: ClassVar[ACCESS_FLAGS] = ...
    VARARGS: ClassVar[ACCESS_FLAGS] = ...
    VOLATILE: ClassVar[ACCESS_FLAGS] = ...
    __name__: Any
    def __init__(self, *args, **kwargs) -> None: ...
    def __ge__(self, other) -> bool: ...
    def __gt__(self, other) -> bool: ...
    def __hash__(self) -> int: ...
    def __index__(self) -> Any: ...
    def __int__(self) -> int: ...
    def __le__(self, other) -> bool: ...
    def __lt__(self, other) -> bool: ...

class Class(lief.Object):
    class it_fields:
        def __init__(self, *args, **kwargs) -> None: ...
        def __getitem__(self, arg: int, /) -> lief.DEX.Field: ...
        def __iter__(self) -> lief.DEX.Class.it_fields: ...
        def __len__(self) -> int: ...
        def __next__(self) -> lief.DEX.Field: ...

    class it_methods:
        def __init__(self, *args, **kwargs) -> None: ...
        def __getitem__(self, arg: int, /) -> lief.DEX.Method: ...
        def __iter__(self) -> lief.DEX.Class.it_methods: ...
        def __len__(self) -> int: ...
        def __next__(self) -> lief.DEX.Method: ...

    class it_named_fields:
        def __init__(self, *args, **kwargs) -> None: ...
        def __getitem__(self, arg: int, /) -> lief.DEX.Field: ...
        def __iter__(self) -> lief.DEX.Class.it_named_fields: ...
        def __len__(self) -> int: ...
        def __next__(self) -> lief.DEX.Field: ...

    class it_named_methods:
        def __init__(self, *args, **kwargs) -> None: ...
        def __getitem__(self, arg: int, /) -> lief.DEX.Method: ...
        def __iter__(self) -> lief.DEX.Class.it_named_methods: ...
        def __len__(self) -> int: ...
        def __next__(self) -> lief.DEX.Method: ...
    def __init__(self, *args, **kwargs) -> None: ...
    def get_field(self, name: str) -> lief.DEX.Class.it_named_fields: ...
    def get_method(self, name: str) -> lief.DEX.Class.it_named_methods: ...
    def has(self, flag: lief.DEX.ACCESS_FLAGS) -> bool: ...
    @property
    def access_flags(self) -> list[lief.DEX.ACCESS_FLAGS]: ...
    @property
    def dex2dex_info(self) -> dict[lief.DEX.Method,dict[int,int]]: ...
    @property
    def fields(self) -> lief.DEX.Class.it_fields: ...
    @property
    def fullname(self) -> str: ...
    @property
    def has_parent(self) -> bool: ...
    @property
    def index(self) -> int: ...
    @property
    def methods(self) -> lief.DEX.Class.it_methods: ...
    @property
    def name(self) -> str: ...
    @property
    def package_name(self) -> str: ...
    @property
    def parent(self) -> lief.DEX.Class: ...
    @property
    def pretty_name(self) -> str: ...
    @property
    def source_filename(self) -> str: ...

class CodeInfo(lief.Object):
    def __init__(self, *args, **kwargs) -> None: ...

class Field(lief.Object):
    def __init__(self, *args, **kwargs) -> None: ...
    def has(self, flag: lief.DEX.ACCESS_FLAGS) -> bool: ...
    @property
    def access_flags(self) -> list[lief.DEX.ACCESS_FLAGS]: ...
    @property
    def cls(self) -> lief.DEX.Class: ...
    @property
    def has_class(self) -> bool: ...
    @property
    def index(self) -> int: ...
    @property
    def is_static(self) -> bool: ...
    @property
    def name(self) -> str: ...
    @property
    def type(self) -> lief.DEX.Type: ...

class File(lief.Object):
    class it_classes:
        def __init__(self, *args, **kwargs) -> None: ...
        def __getitem__(self, arg: int, /) -> lief.DEX.Class: ...
        def __iter__(self) -> lief.DEX.File.it_classes: ...
        def __len__(self) -> int: ...
        def __next__(self) -> lief.DEX.Class: ...

    class it_fields:
        def __init__(self, *args, **kwargs) -> None: ...
        def __getitem__(self, arg: int, /) -> lief.DEX.Field: ...
        def __iter__(self) -> lief.DEX.File.it_fields: ...
        def __len__(self) -> int: ...
        def __next__(self) -> lief.DEX.Field: ...

    class it_methods:
        def __init__(self, *args, **kwargs) -> None: ...
        def __getitem__(self, arg: int, /) -> lief.DEX.Method: ...
        def __iter__(self) -> lief.DEX.File.it_methods: ...
        def __len__(self) -> int: ...
        def __next__(self) -> lief.DEX.Method: ...

    class it_prototypes:
        def __init__(self, *args, **kwargs) -> None: ...
        def __getitem__(self, arg: int, /) -> lief.DEX.Prototype: ...
        def __iter__(self) -> lief.DEX.File.it_prototypes: ...
        def __len__(self) -> int: ...
        def __next__(self) -> lief.DEX.Prototype: ...

    class it_strings:
        def __init__(self, *args, **kwargs) -> None: ...
        def __getitem__(self, arg: int, /) -> str: ...
        def __iter__(self) -> lief.DEX.File.it_strings: ...
        def __len__(self) -> int: ...
        def __next__(self) -> str: ...

    class it_types:
        def __init__(self, *args, **kwargs) -> None: ...
        def __getitem__(self, arg: int, /) -> lief.DEX.Type: ...
        def __iter__(self) -> lief.DEX.File.it_types: ...
        def __len__(self) -> int: ...
        def __next__(self) -> lief.DEX.Type: ...
    location: str
    name: str
    def __init__(self, *args, **kwargs) -> None: ...
    @overload
    def get_class(self, classname: str) -> lief.DEX.Class: ...
    @overload
    def get_class(self, classname: int) -> lief.DEX.Class: ...
    def has_class(self, classname: str) -> bool: ...
    def raw(self, deoptimize: bool = ...) -> list[int]: ...
    def save(self, output: str = ..., deoptimize: bool = ...) -> str: ...
    @property
    def classes(self) -> lief.DEX.File.it_classes: ...
    @property
    def dex2dex_json_info(self) -> str: ...
    @property
    def fields(self) -> lief.DEX.File.it_fields: ...
    @property
    def header(self) -> lief.DEX.Header: ...
    @property
    def map(self) -> lief.DEX.MapList: ...
    @property
    def methods(self) -> lief.DEX.File.it_methods: ...
    @property
    def prototypes(self) -> lief.DEX.File.it_prototypes: ...
    @property
    def strings(self) -> lief.DEX.File.it_strings: ...
    @property
    def types(self) -> lief.DEX.File.it_types: ...
    @property
    def version(self) -> int: ...

class Header(lief.Object):
    def __init__(self, *args, **kwargs) -> None: ...
    @property
    def checksum(self) -> int: ...
    @property
    def classes(self) -> tuple[int,int]: ...
    @property
    def data(self) -> tuple[int,int]: ...
    @property
    def endian_tag(self) -> int: ...
    @property
    def fields(self) -> tuple[int,int]: ...
    @property
    def file_size(self) -> int: ...
    @property
    def header_size(self) -> int: ...
    @property
    def link(self) -> tuple[int,int]: ...
    @property
    def magic(self) -> list[int]: ...
    @property
    def map_offset(self) -> int: ...
    @property
    def methods(self) -> tuple[int,int]: ...
    @property
    def nb_classes(self) -> int: ...
    @property
    def nb_methods(self) -> int: ...
    @property
    def prototypes(self) -> tuple[int,int]: ...
    @property
    def signature(self) -> list[int]: ...
    @property
    def strings(self) -> tuple[int,int]: ...
    @property
    def types(self) -> tuple[int,int]: ...

class MapItem(lief.Object):
    class TYPES:
        ANNOTATION: ClassVar[MapItem.TYPES] = ...
        ANNOTATIONS_DIRECTORY: ClassVar[MapItem.TYPES] = ...
        ANNOTATION_SET: ClassVar[MapItem.TYPES] = ...
        ANNOTATION_SET_REF_LIST: ClassVar[MapItem.TYPES] = ...
        CALL_SITE_ID: ClassVar[MapItem.TYPES] = ...
        CLASS_DATA: ClassVar[MapItem.TYPES] = ...
        CLASS_DEF: ClassVar[MapItem.TYPES] = ...
        CODE: ClassVar[MapItem.TYPES] = ...
        DEBUG_INFO: ClassVar[MapItem.TYPES] = ...
        ENCODED_ARRAY: ClassVar[MapItem.TYPES] = ...
        FIELD_ID: ClassVar[MapItem.TYPES] = ...
        HEADER: ClassVar[MapItem.TYPES] = ...
        MAP_LIST: ClassVar[MapItem.TYPES] = ...
        METHOD_HANDLE: ClassVar[MapItem.TYPES] = ...
        METHOD_ID: ClassVar[MapItem.TYPES] = ...
        PROTO_ID: ClassVar[MapItem.TYPES] = ...
        STRING_DATA: ClassVar[MapItem.TYPES] = ...
        STRING_ID: ClassVar[MapItem.TYPES] = ...
        TYPE_ID: ClassVar[MapItem.TYPES] = ...
        TYPE_LIST: ClassVar[MapItem.TYPES] = ...
        __name__: Any
        def __init__(self, *args, **kwargs) -> None: ...
        @staticmethod
        def from_value(arg: int, /) -> lief.DEX.MapItem.TYPES: ...
        def __ge__(self, other) -> bool: ...
        def __gt__(self, other) -> bool: ...
        def __hash__(self) -> int: ...
        def __index__(self) -> Any: ...
        def __int__(self) -> int: ...
        def __le__(self, other) -> bool: ...
        def __lt__(self, other) -> bool: ...
        @property
        def value(self) -> int: ...
    def __init__(self, *args, **kwargs) -> None: ...
    @property
    def offset(self) -> int: ...
    @property
    def size(self) -> int: ...
    @property
    def type(self) -> lief.DEX.MapItem.TYPES: ...

class MapList(lief.Object):
    class it_items_t:
        def __init__(self, *args, **kwargs) -> None: ...
        def __getitem__(self, arg: int, /) -> lief.DEX.MapItem: ...
        def __iter__(self) -> lief.DEX.MapList.it_items_t: ...
        def __len__(self) -> int: ...
        def __next__(self) -> lief.DEX.MapItem: ...
    def __init__(self, *args, **kwargs) -> None: ...
    def get(self, type: lief.DEX.MapItem.TYPES) -> lief.DEX.MapItem: ...
    def has(self, type: lief.DEX.MapItem.TYPES) -> bool: ...
    def __getitem__(self, arg: lief.DEX.MapItem.TYPES, /) -> lief.DEX.MapItem: ...
    @property
    def items(self) -> lief.DEX.MapList.it_items_t: ...

class Method(lief.Object):
    def __init__(self, *args, **kwargs) -> None: ...
    def has(self, flag: lief.DEX.ACCESS_FLAGS) -> bool: ...
    def insert_dex2dex_info(self, pc: int, index: int) -> None: ...
    @property
    def access_flags(self) -> list[lief.DEX.ACCESS_FLAGS]: ...
    @property
    def bytecode(self) -> list[int]: ...
    @property
    def cls(self) -> lief.DEX.Class: ...
    @property
    def code_offset(self) -> int: ...
    @property
    def has_class(self) -> bool: ...
    @property
    def index(self) -> int: ...
    @property
    def is_virtual(self) -> bool: ...
    @property
    def name(self) -> str: ...
    @property
    def prototype(self) -> lief.DEX.Prototype: ...

class Prototype(lief.Object):
    class it_params:
        def __init__(self, *args, **kwargs) -> None: ...
        def __getitem__(self, arg: int, /) -> lief.DEX.Type: ...
        def __iter__(self) -> lief.DEX.Prototype.it_params: ...
        def __len__(self) -> int: ...
        def __next__(self) -> lief.DEX.Type: ...
    def __init__(self, *args, **kwargs) -> None: ...
    @property
    def parameters_type(self) -> lief.DEX.Prototype.it_params: ...
    @property
    def return_type(self) -> lief.DEX.Type: ...

class Type(lief.Object):
    class PRIMITIVES:
        BOOLEAN: ClassVar[Type.PRIMITIVES] = ...
        BYTE: ClassVar[Type.PRIMITIVES] = ...
        CHAR: ClassVar[Type.PRIMITIVES] = ...
        DOUBLE: ClassVar[Type.PRIMITIVES] = ...
        FLOAT: ClassVar[Type.PRIMITIVES] = ...
        INT: ClassVar[Type.PRIMITIVES] = ...
        LONG: ClassVar[Type.PRIMITIVES] = ...
        SHORT: ClassVar[Type.PRIMITIVES] = ...
        VOID_T: ClassVar[Type.PRIMITIVES] = ...
        __name__: Any
        def __init__(self, *args, **kwargs) -> None: ...
        def __ge__(self, other) -> bool: ...
        def __gt__(self, other) -> bool: ...
        def __hash__(self) -> int: ...
        def __index__(self) -> Any: ...
        def __int__(self) -> int: ...
        def __le__(self, other) -> bool: ...
        def __lt__(self, other) -> bool: ...

    class TYPES:
        ARRAY: ClassVar[Type.TYPES] = ...
        CLASS: ClassVar[Type.TYPES] = ...
        PRIMITIVE: ClassVar[Type.TYPES] = ...
        UNKNOWN: ClassVar[Type.TYPES] = ...
        __name__: Any
        def __init__(self, *args, **kwargs) -> None: ...
        def __ge__(self, other) -> bool: ...
        def __gt__(self, other) -> bool: ...
        def __hash__(self) -> int: ...
        def __index__(self) -> Any: ...
        def __int__(self) -> int: ...
        def __le__(self, other) -> bool: ...
        def __lt__(self, other) -> bool: ...
    def __init__(self, *args, **kwargs) -> None: ...
    @staticmethod
    def pretty_name(primitive: lief.DEX.Type.PRIMITIVES) -> str: ...
    @property
    def dim(self) -> int: ...
    @property
    def type(self) -> lief.DEX.Type.TYPES: ...
    @property
    def underlying_array_type(self) -> lief.DEX.Type: ...
    @property
    def value(self) -> object: ...

@overload
def parse(filename: str) -> Optional[lief.DEX.File]: ...
@overload
def parse(raw: list[int], name: str = ...) -> Optional[lief.DEX.File]: ...
@overload
def parse(obj: Union[io.IOBase|os.PathLike], name: str = ...) -> Optional[lief.DEX.File]: ...
@overload
def version(file: str) -> int: ...
@overload
def version(raw: list[int]) -> int: ...
