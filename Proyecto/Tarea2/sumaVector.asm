.code 
    align 16
    sumaVectorial proc
    
    vmovups ymm1, ymmword ptr [rcx+r8*4]
    vmovups ymm2, ymmword ptr [rdx+r8*4]
    vaddps  ymm0, ymm1, ymm2
    vmovq rax, xmm1
    ret
    sumaVectorial endp
end
