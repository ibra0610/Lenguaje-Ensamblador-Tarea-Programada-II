.data
    num real4 0.0

.code 
    align 16
    calcCoseno proc
    movd num, xmm0
    fld num
    fcos
    fstp num
    movd xmm0, num
    ret
    calcCoseno endp
end