use super::Command;
use lief_ffi as ffi;

use crate::macho::binding_info::{Chained, CHAINED_FORMAT};
use crate::{common::FromFFI, declare_iterator};
use std::marker::PhantomData;

pub struct DyldChainedFixups<'a> {
    ptr: cxx::UniquePtr<ffi::MachO_DyldChainedFixups>,
    _owner: PhantomData<&'a ffi::MachO_Binary>,
}

impl std::fmt::Debug for DyldChainedFixups<'_> {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        let base = self as &dyn Command;
        f.debug_struct("DyldChainedFixups")
            .field("base", &base)
            .field("data_offset", &self.data_offset())
            .field("data_size", &self.data_size())
            .field("fixups_version", &self.fixups_version())
            .field("starts_offset", &self.starts_offset())
            .field("imports_offset", &self.imports_offset())
            .field("symbols_offset", &self.symbols_offset())
            .field("imports_count", &self.imports_count())
            .field("symbols_format", &self.symbols_format())
            .field("imports_format", &self.imports_format())
            .finish()
    }
}

impl DyldChainedFixups<'_> {
    pub fn data_offset(&self) -> u32 {
        self.ptr.data_offset()
    }
    pub fn data_size(&self) -> u32 {
        self.ptr.data_size()
    }
    pub fn fixups_version(&self) -> u32 {
        self.ptr.fixups_version()
    }
    pub fn starts_offset(&self) -> u32 {
        self.ptr.starts_offset()
    }
    pub fn imports_offset(&self) -> u32 {
        self.ptr.imports_offset()
    }
    pub fn symbols_offset(&self) -> u32 {
        self.ptr.symbols_offset()
    }
    pub fn imports_count(&self) -> u32 {
        self.ptr.imports_count()
    }
    pub fn symbols_format(&self) -> u32 {
        self.ptr.symbols_format()
    }
    pub fn imports_format(&self) -> CHAINED_FORMAT {
        CHAINED_FORMAT::from_value(self.ptr.imports_format())
    }

    pub fn bindings(&self) -> Bindings {
        Bindings::new(self.ptr.bindings())
    }
}

impl FromFFI<ffi::MachO_DyldChainedFixups> for DyldChainedFixups<'_> {
    fn from_ffi(cmd: cxx::UniquePtr<ffi::MachO_DyldChainedFixups>) -> Self {
        Self {
            ptr: cmd,
            _owner: PhantomData,
        }
    }
}

impl Command for DyldChainedFixups<'_> {
    fn get_base(&self) -> &ffi::MachO_Command {
        self.ptr.as_ref().unwrap().as_ref()
    }
}

declare_iterator!(
    Bindings,
    Chained<'a>,
    ffi::MachO_ChainedBindingInfo,
    ffi::MachO_DyldChainedFixups,
    ffi::MachO_DyldChainedFixups_it_bindings
);
