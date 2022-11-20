.code 
    align 16
    sumaVectorial proc
    
    vmovups xmm1, xmmdouble ptr [rcx]
    vmovups xmm2, xmmdouble ptr [rdx]
    vaddps  xmm0, xmm1, xmm2
   
    ret
    sumaVectorial endp
end
