

.code
		procMultiplicacion proc			;Procedimiento para calcular la Multiplicacion
			
			mulsd	xmm0, xmm1			;Calcula la multiplicacion
				
			ret							;Retorna valor 
	procMultiplicacion endp				;Cierra procedimiento
 end