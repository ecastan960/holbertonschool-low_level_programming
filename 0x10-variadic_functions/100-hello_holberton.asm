section .data
    text db "Hello, Holberton",10
    text_len equ $ -text


section .text
    global _start

_start:
    mov edx, text_len
    mov ccx, text
    mov ebx, 1
    mov eax, 4
    int 0x80

    mov eax, 1
    mov ebx, 0
    int 0x80
