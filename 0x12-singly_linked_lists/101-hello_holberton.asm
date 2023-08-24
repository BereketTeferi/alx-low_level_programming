section .text
global _start

_start:
mov rdi, msg
call print

mov rax, 60
xor rdi, rdi
syscall

section .data
msg: db "Hello, Holberton", 10, 0

print:
mov rax, 1
syscall
ret
