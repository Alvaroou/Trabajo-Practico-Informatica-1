

#include <stdio.h>
#include <math.h>


float calcularAreaRectangulo(float longitud, float altura);
float calcularPerimetroRectangulo(float longitud, float altura);
float calcularDiagonalRectangulo(float longitud, float altura);
float calcularAreaCirculo(float radio);
float calcularPerimetroCirculo(float radio);
void imprimirResultados(float area, float perimetro);

int main(void) {
	int opcion;
	float longitud, altura, radio;
	float area, perimetro;
	
	
	do {
		printf("Ingrese la figura que desea calcular (1: rectangulo, 2: circulo): ");
		if (scanf("%d", &opcion) != 1) {
			
			while (getchar() != '\n');
			opcion = 0;
		}
		if (opcion != 1 && opcion != 2)
			printf("Opcion invalida. Intente nuevamente.\n");
	} while (opcion != 1 && opcion != 2);
	
	if (opcion == 1) {
		printf("Opcion de rectangulo seleccionada\n");
		printf("Ingrese la longitud del rectangulo: ");
		scanf("%f", &longitud);
		printf("Ingrese la altura del rectangulo: ");
		scanf("%f", &altura);
		
		area = calcularAreaRectangulo(longitud, altura);
		perimetro = calcularPerimetroRectangulo(longitud, altura);
		imprimirResultados(area, perimetro);
		
		
		printf("La diagonal del rectangulo es: %.2f\n",
			   calcularDiagonalRectangulo(longitud, altura));
	} else {
		printf("Opcion de circulo seleccionada\n");
		printf("Ingrese el radio del circulo: ");
		scanf("%f", &radio);
		
		area = calcularAreaCirculo(radio);
		perimetro = calcularPerimetroCirculo(radio);
		imprimirResultados(area, perimetro);
	}
	
	return 0;
}
float calcularAreaRectangulo(float longitud, float altura) {
	return longitud * altura;
}

float calcularPerimetroRectangulo(float longitud, float altura) {
	return 2 * (longitud + altura);
}

float calcularDiagonalRectangulo(float longitud, float altura) {
	return sqrtf(longitud * longitud + altura * altura);
}

float calcularAreaCirculo(float radio) {
	return (float)M_PI * radio * radio;
}

float calcularPerimetroCirculo(float radio) {
	return 2 * (float)M_PI * radio;
}

void imprimirResultados(float area, float perimetro) {
	printf("El area es: %.2f\n", area);
	printf("El perimetro es: %.2f\n", perimetro);
}
