.code 
    align 16
    sumaVectorial proc
    
    movups xmm1, xmmword ptr [rcx]
    movups xmm2, xmmword ptr [rdx]
    addps  xmm0, xmm1, xmm2
    movd rax, xmm0
    ret
    sumaVectorial endp
end
