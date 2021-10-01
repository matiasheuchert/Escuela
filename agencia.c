/*
Una agencia de viajes desea procesar los datos de sus ventas en un día. Para ello se cargan las operaciones realizadas.
El destino (1-Internacional, 2-Nacional) y la cantidad de pasajeros que viajan. Puede ser que ese día no se hayan realizado operaciones, y se pueden realizar
un máximo de 10 operaciónes diarias. El programa finaliza al ingresar 0 como destino. Informar:
-Total de operaciones realizadas.
-Total de boletos vendidos.
-Cantidad máxima de pasajeros en una sola operación.
-Porcentaje de boletos que tuvieron destino nacional.
-Mínimo de boletos vendidos para destinos internacionales.
*/
#include <stdio.h>

int destino, pasajeros, acum, cont, max, min, nacional;
float porc;

main(){
	printf("[INDIQUE EL DESTINO] (1. INTERNACIONAL / 2. NACIONAL) \n");
	scanf("%d", &destino);
	
	do{
		cont = cont +1;
		printf("[INGRESE LA CANTIDAD DE PASAJEROS] \n");
		scanf("%d", &pasajeros);
		if(pasajeros > max || cont == 1){
			max = pasajeros;
		}
		
		acum = acum+ pasajeros;
		
	if(destino == 1){
		if(pasajeros < min || cont == 1){
			min = pasajeros;
		}
	}
	if(destino == 2){
		nacional = nacional +1;
	}
	printf("[INDIQUE EL DESTINO] (1. INTERNACIONAL / 2. NACIONAL) \n");
	scanf("%d", &destino);
	if(destino != 1 && destino != 2 && destino != 0){
		printf("El destino ingresado no es valido. Ingreselo nuevamente: \n");
		scanf("%d", &destino);
	}
		if(cont == 10){
			destino = 0;
		}
	}while(destino != 0);
	porc = nacional * 100 / cont;
	
	printf("La cantidad de operaciones realizadas fue: %d \n", cont);
	printf("El total de boletos vendidos fue: %d \n", acum);
	printf("La cantidad maxima de pasajeros en una operacion fue: %d \n", max);
	printf("El porcentaje de operaciones con destino nacional es: %f \n", porc);
	printf("El minimo de boletos vendidos para destino internacional fue: %d", min);
}
