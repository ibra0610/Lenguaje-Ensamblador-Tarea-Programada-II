.code 
    align 16
    sumaVectorial proc
    
    vmovups xmm0, xmmword ptr [rcx]
    vmovups xmm1, xmmword ptr [rdx]
    vaddps  xmm2, xmm1, xmm0
    vmovups rax, xmm2

    ret
    sumaVectorial endp
end
