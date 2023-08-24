global main
extern printf

section .data
    msg db "Hello, Holberton!\n", 0

section .text

main:
    mov rdi, msg
    xor eax, eax
    call printf

    xor eax, eax
    ret
