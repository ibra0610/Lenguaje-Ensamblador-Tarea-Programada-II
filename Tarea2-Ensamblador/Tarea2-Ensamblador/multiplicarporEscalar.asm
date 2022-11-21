.data 
	
	vec1 real4 1.0, 2.0, 3.0, 4.0 
	escalar db 2

.code 
	align 16 
	multiplicacion proc 

	movd vec1, xmm0
	movd escalar, xmm1

	mov cx, 4
    mov si, 0

    multiplique:
    mov ax, vec1[si]
    IMUL ax, escalar
    mov vec1[si], ax

    inc si

    loop multiplique


	ret 

	multiplicacion endp 

end

