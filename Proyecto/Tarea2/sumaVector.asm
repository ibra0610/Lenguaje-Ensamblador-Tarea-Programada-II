.code 
    align 16
    sumaVectorial proc
    
    vmovups ymm1, ymmword ptr [rcx]
    vmovups ymm2, ymmword ptr [rdx]
    vaddps  ymm0, ymm1, ymm2
    vmovd rax, ymm0
    ret
    sumaVectorial endp
end
