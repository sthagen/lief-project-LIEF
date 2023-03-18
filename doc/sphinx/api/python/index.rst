.. _python-api-ref:

Python
======

.. toctree::
  :caption: Common
  :maxdepth: 1

  utilities.rst
  abstract.rst

.. toctree::
  :caption: Formats specific
  :maxdepth: 2

  elf.rst
  pe.rst
  macho.rst
  oat.rst
  dex.rst
  vdex.rst
  art.rst

.. toctree::
  :caption: Platforms
  :maxdepth: 2

  platforms/android.rst


Logging
-------

.. autofunction:: lief.logging.set_level

.. autofunction:: lief.logging.enable

.. autofunction:: lief.logging.disable

.. autofunction:: lief.logging.set_path


Logging levels
~~~~~~~~~~~~~~

.. autoclass:: lief.logging.LOGGING_LEVEL
  :members:
  :inherited-members:
  :undoc-members:

.. _python-api-error-handling:

Error Handling
--------------

.. autoclass:: lief.lief_errors
  :members:
  :inherited-members:
  :undoc-members:

.. autoclass:: lief.ok_t
  :members:
  :inherited-members:
  :undoc-members:

See also the section :ref:`err_handling`

Exceptions
----------

LIEF no longer uses exceptions which have been replaced with the ``ResultOrError``
idiom.

See:
  * :ref:`err_handling`
  * https://llvm.org/docs/ProgrammersManual.html#error-handling
  * https://doc.rust-lang.org/book/ch09-02-recoverable-errors-with-result.html#recoverable-errors-with-result
