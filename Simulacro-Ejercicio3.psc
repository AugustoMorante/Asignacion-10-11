Algoritmo Simulacro_Ejercicio3
	Escribir "Ponga su peso[kg]"
	Leer peso
	Escribir "Ponga su altura[m]"
	Leer altura
	imc <- peso/(altura*altura)
	Escribir imc
	Si imc < 15 Entonces
		Escribir "Criterio de ingreso en hospital"
	SiNo
		Si imc >= 15 y imc < 20 Entonces
			Escribir "Bajo peso"
		SiNo
			Si imc >= 20 y imc <= 30  Entonces
				Escribir "Peso normal (Saludable)"
			SiNo
				Si imc > 30 y imc <= 10 Entonces
					Escribir "Sobrepeso (Obesidad de grado I)"
				SiNo
					Si imc > 40 Entonces
						Escribir "Sobrepeso Crónico (Obesidad de grado II)"
					Fin Si
				Fin Si
			Fin Si
		Fin Si
	Fin Si
	
FinAlgoritmo
