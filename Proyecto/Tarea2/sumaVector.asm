.code 
    align 16
    sumaVectorial proc
    
    vmovups ymm1, ymmword ptr [rcx]
    vmovups ymm2, ymmword ptr [rdx]
    vaddps  ymm0, ymm1, ymm2
    vmovq rax, xmm1
    ret
    sumaVectorial endp
end
