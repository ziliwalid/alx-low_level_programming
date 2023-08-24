    extern  printf          ; Declaration of the C function to be called

    section .data          ; Data section, initialized variables
msg:    db "Hello, Holberton", 0 ; Null-terminated C string
fmt:    db "%s", 10, 0      ; The format for printf: "%s", newline, null-terminator

    section .text          ; Code section.

    global main            ; Entry point as per GCC standards
main:                     ; Label for the program's entry point
    push    rbp            ; Set up the stack frame, alignment required

    mov     rdi, fmt       ; Load the format string into rdi
    mov     rsi, msg       ; Load the message string into rsi
    xor     rax, rax       ; Clear rax (could also use "mov rax, 0")

    call    printf         ; Call the C function printf

    pop     rbp            ; Restore the stack frame

    xor     rax, rax       ; Set rax to 0 (normal, no error return value)
    ret                     ; Return from the main function

