.code 
    align 16
    sumaVectorial proc
    
    vmovups xmm1, xmmword ptr [rcx]
    vmovups xmm2, xmmword ptr [rdx]
    vaddps  xmm0, xmm1, xmm2
   
    ret
    sumaVectorial endp
end
