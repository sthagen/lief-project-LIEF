from typing import Any, ClassVar, Optional

import lief.dwarf # type: ignore
import lief.dwarf.types.Base # type: ignore
import lief.dwarf.types.ClassLike # type: ignore

class Array(lief.dwarf.Type):
    def __init__(self, *args, **kwargs) -> None: ...
    @property
    def underlying_type(self) -> lief.dwarf.Type: ...

class Base(lief.dwarf.Type):
    class ENCODING:
        ADDRESS: ClassVar[Base.ENCODING] = ...
        BOOLEAN: ClassVar[Base.ENCODING] = ...
        FLOAT: ClassVar[Base.ENCODING] = ...
        NONE: ClassVar[Base.ENCODING] = ...
        SIGNED: ClassVar[Base.ENCODING] = ...
        SIGNED_CHAR: ClassVar[Base.ENCODING] = ...
        UNSIGNED: ClassVar[Base.ENCODING] = ...
        UNSIGNED_CHAR: ClassVar[Base.ENCODING] = ...
        __name__: str
        def __init__(self, *args, **kwargs) -> None: ...
        def __ge__(self, other) -> bool: ...
        def __gt__(self, other) -> bool: ...
        def __hash__(self) -> int: ...
        def __index__(self) -> Any: ...
        def __int__(self) -> int: ...
        def __le__(self, other) -> bool: ...
        def __lt__(self, other) -> bool: ...
    def __init__(self, *args, **kwargs) -> None: ...
    @property
    def encoding(self) -> lief.dwarf.types.Base.ENCODING: ...

class Class(ClassLike):
    def __init__(self, *args, **kwargs) -> None: ...

class ClassLike(lief.dwarf.Type):
    class Member:
        def __init__(self, *args, **kwargs) -> None: ...
        @property
        def bit_offset(self) -> Optional[int]: ...
        @property
        def is_declaration(self) -> bool: ...
        @property
        def is_external(self) -> bool: ...
        @property
        def name(self) -> str: ...
        @property
        def offset(self) -> Optional[int]: ...
        @property
        def type(self) -> Optional[lief.dwarf.Type]: ...
    def __init__(self, *args, **kwargs) -> None: ...
    def find_member(self, offset: int) -> Optional[lief.dwarf.types.ClassLike.Member]: ...
    @property
    def members(self) -> list[lief.dwarf.types.ClassLike.Member]: ...

class Const(lief.dwarf.Type):
    def __init__(self, *args, **kwargs) -> None: ...
    @property
    def underlying_type(self) -> lief.dwarf.Type: ...

class Pointer(lief.dwarf.Type):
    def __init__(self, *args, **kwargs) -> None: ...
    @property
    def underlying_type(self) -> lief.dwarf.Type: ...

class Structure(ClassLike):
    def __init__(self, *args, **kwargs) -> None: ...

class Union(ClassLike):
    def __init__(self, *args, **kwargs) -> None: ...