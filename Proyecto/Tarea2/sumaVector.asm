.code 
    align 16
    sumaVectorial proc
    
    vmovups xmm0, xmmword ptr [rbx]
    vmovups xmm1, xmmword ptr [rcx]
    vaddps  xmm2, xmm1, xmm0

    ret
    sumaVectorial endp
end
