OUTPUT_FORMAT("elf32-littlearm", "elf32-littlearm", "elf32-littlearm")
OUTPUT_ARCH(arm)
ENTRY(_start)

__TEXT_START__ = 0x30000000;
_STACK_SIZE = DEFINED(_STACK_SIZE) ? _STACK_SIZE : 0x2000;
_HEAP_SIZE = DEFINED(_HEAP_SIZE) ? _HEAP_SIZE : 0x200000;

SECTIONS
{
	.text __TEXT_START__ :
	{
		__TEXT_START__ = .;
	
		*startup.o(.text)
		*(.text)
		*(.text.*)
		. = ALIGN(4);
	
		__TEXT_END__ = .;
	}
	
	.ARM.exidx : 
	{
		*(.ARM.exidx)
		. = ALIGN(4);
	}

	.rodata :
	{
		__RODATA_START__ = .;

		*(.rodata)
		*(.rodata.*)
		. = ALIGN(8);

		__RODATA_END__ = .;
	}

	.data :
	{
		__DATA_START__ = .;

		*(.data)
		*(.data.*)
		. = ALIGN(8);

		__DATA_END__ = .; 
	}

	.bss :
	{
		__BSS_START__ = .;	    

		*(.bss)
		*(.bss.*)
		*(COMMON)
		. = ALIGN(8);
	
		__BSS_END__ = .;
	}


	.heap (NOLOAD) : {
	 . = ALIGN(16);
	_heap = .;
	HeapBase = .;
	_heap_start = .;
	_start_heap = .;
	. += _HEAP_SIZE;
	_heap_end = .;
	HeapLimit = .;
	PROVIDE( __cs3_heap_start = _start_heap);
	}

	_end = .;
	__end = .;
	PROVIDE(end = .);
}
