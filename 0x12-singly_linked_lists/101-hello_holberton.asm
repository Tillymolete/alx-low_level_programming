section .data
    message db "Hello, Holberton", 0
    format db "%s\n", 0

section .text
    global main
    extern printf

main:
    ; Prepare arguments for printf function
    mov rdi, format
    mov rsi, message
    xor rax, rax ; Clear rax register to indicate printf has variable arguments
    ; Call printf function
    call printf

    ; Exit the program
    mov rax, 0
    ret

