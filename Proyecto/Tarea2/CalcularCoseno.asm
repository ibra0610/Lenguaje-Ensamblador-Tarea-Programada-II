.code 
    align 16
    calcCoseno proc
    
    fld num
    fcos
    fstp num
    vmovups xmm0, num
    ret
    calcCoseno endp
end
