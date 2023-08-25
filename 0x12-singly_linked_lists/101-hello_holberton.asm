section .data
    hello_msg db "Hello, Holberton",0
    fmt db "%s", 0xA, 0

section .text
    global main
    extern printf

main:
    push rdi               ; Preserve registers
    push rsi

    lea rdi, [hello_msg]   ; Load address of hello_msg
    lea rsi, [fmt]         ; Load address of format string
    call printf           ; Call printf function

    pop rsi                ; Restore registers
    pop rdi

    mov rax, 0x60          ; Exit system call number
    xor rdi, rdi           ; Return status 0
    syscall

    ret

