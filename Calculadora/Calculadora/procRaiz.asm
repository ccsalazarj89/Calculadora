.code
	procRaiz proc						;Procedimiento para calcular la raiz cuadrada de un numero
			
			sqrtsd	xmm0, xmm1			;Calcula la raiz

			ret							;Retorna valor 
	procRaiz endp						;Cierra procedimiento
 end