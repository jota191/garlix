        .set ALIGN,     1 << 0
        .set MEMINFO,   1 << 1
        .set FLAGS,     ALIGN | MEMINFO
        .set MAGIC,     0x1BADB002
        .set CHECKSUM,  -(MAGIC+FLAGS)

        .align 4
mboot:
        .long MAGIC
        .long FLAGS
        .long CHECKSUM
        .global start
start:
        push %ebx
        push %eax
        call main
        add $8, %esp

        jmp halt

halt:
        jmp halt
