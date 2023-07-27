section .data
    hello db "Hello, Holberton", 0

section .text
    global _start

_start:
    mov rbp, rsp
    mov rdi, hello
    call printf

    mov rax, 60
    xor rdi, rdi
    syscall
