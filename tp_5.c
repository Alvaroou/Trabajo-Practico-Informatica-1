#include <stdio.h>
int alum, cal;  
int max_cal = -1;
int min_cal = 101;
int suma_cal = 0;
int main(void) {
	printf("Ingrese cantidad de alumnos: ");
	scanf("%d", &alum);
	
	while(alum<=0){
		printf("Ingrese una cantidad válida: ");
		scanf("%d", &alum);
	}
	for(int x=0; x<alum; x++){
		printf("Ingrese una calificación: ");
	    scanf("%d", &cal);
		
		while(!(cal<=100 && cal>=0)){
			printf("Ingrese una calificación válida: ");
			scanf("%d", &cal);
		}
		if(cal>max_cal){
			max_cal = cal;
		}
		if(cal<min_cal){
			min_cal = cal;
		}
		printf("\nLa calificacion mas alta hasta ahora es: %d\n", max_cal);
		printf("La calificacion mas baja hasta ahora es: %d\n", min_cal);
		suma_cal += cal;
	}
	float promedio = (float)suma_cal/ alum;

	printf("El promedio de grupo es: %.2f", promedio);


	return 0;
}
