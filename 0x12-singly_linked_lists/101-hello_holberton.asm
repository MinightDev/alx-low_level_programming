section .data
    hello db "Hello, Holberton", 0
    format db "%s", 10, 0

section .text
    global main
    extern printf

main:
    mov rbp, rsp
    mov rdi, format
    mov rsi, hello
    xor rax, rax
    call printf

    mov rax, 60
    xor rdi, rdi
    syscall
