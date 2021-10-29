#include <stdio.h>

int vector[5], i, j, aux;

main(){
	for(i = 0; i < 5; i++){
	printf("%d : ", i);
	scanf("%d", &vector[i]);	
	}
	
for(j = 1; j < 5; j++){
	for(i = 0; i < 4; i++){
		if(vector[i] > vector[i+1]){
		aux = vector[i];
		vector[i] = vector[i+1];
		vector[i+1] = aux;
		}
	}
}
printf("Ordenando el vector... \n");
printf("Usted obtendra los resultados en 3, ");
sleep(1);
printf("2, ");
sleep(1);
printf("1...\n");
sleep(1);
	for(i = 0; i < 5; i++){
		printf("%d | ", vector[i]);
	}
}
