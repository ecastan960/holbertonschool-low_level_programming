section .data
    text db "Hello, Holberton",10
    text_len equ $ -text


section .text
    global _start

_start:
    mov rax, 1
    mov rdi, 0
    mov rsi, text
    mov rdx, text_len
    syscall

    mov rax, 60
    mov rdi, 1
    syscall
