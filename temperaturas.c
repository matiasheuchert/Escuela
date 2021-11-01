/*
Se desea realizar un programa para procesar 10 temperaturas. Se almacenan en un vector y la posicion de memoria se corresponde con el dia en que fueron tomadas.
Imprimir:
-Temperatura minima y en que dia fue tomada.
-Porcentaje de temperaturas menores a 18ªC.
-Promedio de las temperaturas mayores a 20ªC. Imprimir en que dia fueron tomadas.
-Indicar si existieron temperaturas negativas.
-Mostrar el vector ordenado.
*/
#include <stdio.h>

int temperatura[10], i, min, tempMin, diaMin, menor18, acum20, cant20, negativo, cantNeg, j, aux;
float porcen18, prom20;

main(){
	for(i = 0; i < 10; i++){
		printf("Ingrese la temperatura para el dia %d: ", i+1);
		scanf("%d", &temperatura[i]);
		
		if(temperatura[i] < min || i == 0){
			tempMin = temperatura[i];
			diaMin = i+1;
		}
		if(temperatura[i] < 18){
			menor18 = menor18 + 1;
		}
		if(temperatura[i] > 20){
			acum20 = acum20 + temperatura[i];
			cant20 = cant20 + 1;
		}
		if(temperatura[i] < 0){
			negativo = 1;
			cantNeg = cantNeg + 1;
		}
	}
	porcen18 = menor18 + 100 / i;
	prom20 = acum20 / cant20;
	printf("La temperatura minima se registro el dia %d, y fue de %dºC. \n", diaMin, tempMin);
	printf("El porcentaje de temperaturas menores a 18 fue %f \n", porcen18);
	printf("El promedio de temperaturas mayores a 20ºC fue %f \n", prom20);
	printf("La/s temperatura/s mayor/es a 20 fue/ron: ");
	for(i = 0; i < 10; i++){
		
		if(temperatura[i] > 20){
			printf("dia %d: %d | ", i+1, temperatura[i]);
		}
	}
	printf("\n");
	if(negativo == 1){
		printf("Se registro %d temperatura/s negativa/s. \n", cantNeg);
	}
	
	for(j = 1; j < 10; j++){
		for(i = 0; i < 9; i++){
			if(temperatura[i] > temperatura[i+1]){
			aux = temperatura[i];
			temperatura[i] = temperatura[i+1];
			temperatura[i+1] = aux;
			}
		}
	}
	printf("Vector ordenado: ");
	for(i = 0; i < 10; i++){
		printf("%d | ", temperatura[i]);
	}
	
}
