/*
    @file   LinkerScript.ld
    @author Ziad Mohammed Fathi.
    @brief  Linker script for STM32F103xx Device from STM32F103 series
*/

/* Highest address of the user mode stack */
_estack = ORIGIN(RAM) + LENGTH(RAM);  /* End of "RAM" Ram type memory */

_Min_Heap_Size = 0x200;  /* Required amount of heap */
_Min_Stack_Size = 0x400; /* Required amount of stack */

/* Memories definition -> Label_Name(AttributeList) : ORIGIN = StartMemoryAddress,   LENGTH = MemoryLength */
MEMORY
{
    FLASH (xr)  : ORIGIN = 0X08000000 , LENGTH = 64K  
    RAM   (rwx) : ORIGIN = 0X20000000 , LENGTH = 20K
}

SECTIONS
{
    /* .text section, The program code and other data into "FLASH" Rom type memory */
    .text : 
    {
        . = ALIGN(4);
        *(.text)    /* .text sections (code) */
        *(.text*)  /* .text* sections (code) */
        . = ALIGN(4);
        _etext = .; /* Define a global symbols at end of code */
    } >FLASH

    /* .rodata section, Constant data into "FLASH" Rom type memory */
    .rodata : 
    {
        . = ALIGN(4);
        *(.rodata)      /* .rodata sections (constants, strings, etc.) */
        *(.rodata*)     /* .rodata* sections (constants, strings, etc.) */
        . = ALIGN(4);
    } >FLASH

    /* .data section, Initialized data sections into "RAM" Ram type memory */
    .data : 
    {
        . = ALIGN(4);
        _sdata = .;     /* Create a global symbol at data start */
        *(.data)        /* .data sections */
        *(.data*)       /* .data* sections */
        . = ALIGN(4);
        _edata = .;     /* Define a global symbol at data end */
    } >RAM AT>FLASH

    /* .bss section, Uninitialized data section into "RAM" Ram type memory */
    .bss : 
    {
        _sbss = .;    /* Define a global symbol at bss start */
        . = ALIGN(4);
        *(.bss)       /* .bss sections */
        *(.bss*)      /* .bss* sections */
        . = ALIGN(4);
        _ebss = .;    /* Define a global symbol at bss end */
    } >RAM
}