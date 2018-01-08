
.code
	procDivision proc					;Procedimiento para calcular la Division
			
			Divsd	xmm0, xmm1			;Calcula la Division
				
			ret							;Retorna valor 
	procDivision endp
 end