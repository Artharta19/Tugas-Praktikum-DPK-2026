; loop.asm
section .data
    pesan dw "Iwak tempe", 0xd
    pesanlen equ $ - pesan

section .bss

section .text
    global _start

_start:
    mov rax, 1          ; loop counter
    mov rdi, 1
    mov rsi, pesan
    mov rdx, pesanlen
    syscall

    mov rax,60
    xor rdi,rdi
    syscall
