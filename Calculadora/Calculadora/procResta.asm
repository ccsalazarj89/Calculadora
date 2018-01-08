

.code
	procResta proc						;Procedimiento para calcular la resta
			
			subsd	xmm0, xmm1			;Calcula la resta

			ret							;Retorna valor 
	procResta endp						;Cierra procedimiento
 end