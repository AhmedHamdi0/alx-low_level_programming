section .data
    hello db "Hello, Holberton", 0
    format db "%s", 0

section .text
    global main

    extern printf

main:
    sub rsp, 8   ; Align the stack

    ; Call printf
    mov rdi, format
    mov rsi, hello
    call printf

    add rsp, 8   ; Restore the stack
    mov rax, 60  ; Exit syscall
    xor rdi, rdi ; Exit status 0
    syscall
