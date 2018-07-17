/*---------------------------------------------------------------------------*/
/*- NAME: Test firmware Linker Script File for RAM Workspace                 */
/*---------------------------------------------------------------------------*/
/*                                                                           */
/*---------------------------------------------------------------------------*/
/*- File source          : mC100_RAM.ld                                      */
/*- Objective            : Linker Script File for RAM Workspace              */
/*---------------------------------------------------------------------------*/

OUTPUT_FORMAT("elf32-littlearm", "elf32-bigarm", "elf32-littlearm")
OUTPUT_ARCH(arm)
ENTRY(_start)

/* Memory Definitions */
__TEXT_START__ = 0x20000000;

/* Section Definitions  몇번지에 뭘 가따 놓을지 정함*/
SECTIONS
{
  /* first section is .text which is used for code */
  .text __TEXT_START__ : 
  {
  	__TEXT_START__ = .;
    *startup.o (.text)
    *(.text)
    __TEXT_END__ = .; 
    . = ALIGN(4);    
  }
  
  /* .rodata section which is used for read-only data (constants) 
  * .rodata = .const = .rdata
  */
  .rodata :
  {
    __RODATA_START__ = .;
    *(.rodata)
    *(.rodata.*)
    __RODATA_END__ = .;
    . = ALIGN(4);    
  }

  /* .data section which is used for initialized data */
  .data :
  {
    __DATA_START__ = .;
    *(.data)
    *(.data.*)
    __DATA_END__ = .;
    . = ALIGN(4);
  }  
  
  /* .bss section which is used for uninitialized data */
  .bss :
  {
    __BSS_START__ = .;
    *(.bss)
    *(.bss.*)
    __BSS_END__ = .;
    . = ALIGN(4);
  } 
  _end = .;
  __end = _end;
  PROVIDE(end = .);

}
