section .data
    hello_msg db "Hello, Holberton", 10, 0

section .text
    global main
    extern printf

main:
    mov rdi, hello_msg
    xor rax, rax
    call printf

    mov rax, 60
    xor rdi, rdi
    syscall
