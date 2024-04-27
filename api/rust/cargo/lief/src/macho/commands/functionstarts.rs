use super::Command;
use crate::common::FromFFI;
use crate::to_slice;
use lief_ffi as ffi;
use std::marker::PhantomData;

pub struct FunctionStarts<'a> {
    ptr: cxx::UniquePtr<ffi::MachO_FunctionStarts>,
    _owner: PhantomData<&'a ffi::MachO_Binary>,
}

impl FunctionStarts<'_> {
    pub fn data_offset(&self) -> u32 {
        self.ptr.data_offset()
    }
    pub fn data_size(&self) -> u32 {
        self.ptr.data_size()
    }
    pub fn functions(&self) -> Vec<u64> {
        Vec::from(self.ptr.functions().as_slice())
    }
    pub fn content(&self) -> &[u8] {
        to_slice!(self.ptr.content());
    }
}

impl std::fmt::Debug for FunctionStarts<'_> {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        let base = self as &dyn Command;
        f.debug_struct("FunctionStarts")
            .field("base", &base)
            .field("data_offset", &self.data_offset())
            .field("data_size", &self.data_size())
            .finish()
    }
}

impl FromFFI<ffi::MachO_FunctionStarts> for FunctionStarts<'_> {
    fn from_ffi(cmd: cxx::UniquePtr<ffi::MachO_FunctionStarts>) -> Self {
        Self {
            ptr: cmd,
            _owner: PhantomData,
        }
    }
}

impl Command for FunctionStarts<'_> {
    fn get_base(&self) -> &ffi::MachO_Command {
        self.ptr.as_ref().unwrap().as_ref()
    }
}
