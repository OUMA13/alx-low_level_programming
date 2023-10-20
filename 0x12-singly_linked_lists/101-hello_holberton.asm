section .data
    hello_string db "Hello, Holberton",0xa,0

section .text
    global main

    extern printf

main:
    push rbp
    mov rdi, hello_string
    call printf
    add rsp, 8
    mov rax, 60          ; syscall: exit
    xor rdi, rdi         ; status: 0
    syscall
