#include <stdio.h>		

float cont, i, temp, cont_men, cont_neg, max, min, rango, acum;
float prom;
//cont = 0;
//cont_men = 0;
//cont_neg = 0;
//max = 0;
//min = 0;



main(){

for(i = 0; i < 10; i++){
	printf("Ingrese temperatura: \n");
	scanf("%f", &temp);
		if(temp >= 18){
			cont++;
		}	else{
			cont_men++;
		}	if(temp < 0){
			cont_neg++;
			if(i == 0|| temp > max){
				max = temp;
			}
			if(i == 0|| temp < min){
				min = temp;
			}
		
		}
		
}
	printf("\nLa cantidad de temperaturas mayores a 18 es: %f", cont);
	prom = (cont_men / 10) * 100;
	printf("\nEl promedio de temperaturas menores a 18 es: %f", prom);
	rango = max - min;
	printf("\nEl rango de las temperaturas menores a 0 es: %f", rango);
}
