.code 
    align 16
    esAVX proc
    push rbx

    mov eax, 7
    mov ecx, 0

    cpuid

    shr ebx, 16
    and ebx, 1

    mov eax, ebx


    pop rbx
    ret
    esAVX endp
end