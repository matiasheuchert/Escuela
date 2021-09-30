/*
Se leen la cantidad de habitantes en 5 provincias, imprimir:
-provincia con mayor cantidad de habitantes.
-porcentaje de provincias con mas de 100 habitantes.
-sumatoria total.
-promedio de habitantes por provincia. 
*/
#include <stdio.h>

int habitantes, acum, mayor100, max, i, prov_may;
float porcen, prom;


main(){
	
	for(i = 0; i < 5; i++){
	printf("Ingrese la cantidad de habitantes en la provincia %d: \n", i +1);
	scanf("%d", &habitantes);
	
	acum = acum + habitantes;
	if(habitantes > 100){
		mayor100 = mayor100 +1;
	}
	if(habitantes > max || i == 0){
		max = habitantes;
		prov_may = i +1;
		
	}
	
	}
	porcen = mayor100 * 100 / i;
	prom = acum / i;
	
	printf("La provincia con mayor cantidad de habitantes es la Nro %d \n", prov_may);
	printf("El porcentaje de provincias con mas de 100 habitantes es %f \n", porcen);
	printf("La sumatoria total de habitantes es %d \n", acum);
	printf("El promedio de habitantes por provincia es %f", prom);
}



