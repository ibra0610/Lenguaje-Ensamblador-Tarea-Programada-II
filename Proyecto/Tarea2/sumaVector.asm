.code 
    align 16
    sumaVectorial proc
    
    vmovups ymm1, ymmword ptr [rcx]
    vmovups ymm2, ymmword ptr [rdx]
    vaddps  ymm3, ymm1, ymm2
    vmovd eax, xmm1
    ret
    sumaVectorial endp
end
