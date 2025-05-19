#include <stdio.h>

int main(int argc, char *argv[]) {
	float peso, altura, IMC;
	
	printf("Ingresa tu peso en kilogramos: ");
	scanf("%f", &peso);
	
	printf("Ingresa tu altura en metros: ");
	scanf("%f", &altura);
	
	IMC = peso / (altura * altura);
	
	printf("\nSu índice de masa corporal es: %.2f\n\n", IMC);
	
	printf("indice       | Condición\n");
	printf("                        \n");
	printf("< 18.5       | Bajo peso\n");
	printf("18.5 - 24.9  | Normal\n");
	printf("25.0 - 29.9  | Sobrepeso\n");
	printf(">= 30        | Obesidad\n");
		
	return 0;
}

