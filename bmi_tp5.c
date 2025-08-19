#include <stdio.h>

int main(void) {
	float peso, altura, bmi;
	
	printf("Ingrese su peso en kilogramos: ");
	scanf("%f", &peso);
	while (peso <= 0) {
		printf("El peso debe ser mayor que 0.\nIngrese su peso en kilogramos: ");
		scanf("%f", &peso);
	}
	
	printf("Ingrese su altura en metros: ");
	scanf("%f", &altura);
	while (altura <= 0) {
		printf("La altura debe ser mayor que 0.\nIngrese su altura en metros: ");
		scanf("%f", &altura);
	}
	
	bmi = peso / (altura * altura);
	
	printf("\nSu indice de masa corporal es: %.2f\n", bmi);
	
	printf("\nIndice       | Condicion\n");
	printf("-----------------------------\n");
	printf("<18.5        | Bajo peso\n");
	printf("18.5 a 24.9  | Normal\n");
	printf("25.0 a 29.9  | Sobrepeso\n");
	printf(">=30         | Obesidad\n");
	
	if(bmi>=30){
		printf("\nSu condición es: obesidad");
	}
	else if(bmi>=25 && bmi<=29.9){
		printf("\nSu condición es: sobrepeso");
	}
	else if(bmi>18.5 && bmi<=24.9){
		printf("\nSu condición es: peso normal");
	}
	else {
		printf("\nSu condición es: peso bajo ");
	}
	return 0;

}
