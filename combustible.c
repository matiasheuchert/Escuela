/*
Se procesan la cantidad de litros de combustible que expende un surtidor en una estacion de servicio. 
Indicar:
-Total de litros vendidos.
-Carga que más litros tuvo.
-Promedio.
-Porcentaje de personas que cargan mas de 20 litros.
Se leen los litros de cada carga y el usuario indica si desea seguir cargando datos.
Se estima que al menos se realizará una carga.
*/

#include <stdio.h>

int litros, max, i, confirm, acum, mayor20;
float porcen, prom;

main()
{
	do{
	
	i = i + 1;
	printf("[INGRESE LA CANTIDAD DE LITROS DE LA CARGA %d:] \n", i);
	scanf("%d", &litros);
	acum = litros + acum;
	
	if(litros > max || i == 0){
		max = litros;
	}
	if(litros > 20){
		mayor20 = mayor20 + 1;
	}
	
	printf("[DESEA REALIZAR OTRA CARGA?] (1 PARA SI, 0 PARA NO) \n");
	scanf("%d", &confirm);
	
	if(confirm != 1 && confirm != 0){
		printf("[EL VALOR INGRESADO NO ES VALIDO.] \n");
		printf("[DESEA REALIZAR OTRA CARGA?] (1 PARA SI, 0 PARA NO) \n");
		scanf("%d", &confirm);
	
	}
}while(confirm == 1);

prom = acum / i;
porcen = mayor20 * 100 / i;

printf("[LA CANTIDAD TOTAL DE LITROS CARGADOS ES %d] \n", acum);
printf("[LA CARGA QUE MAS LITROS TUVO FUE DE %d LITROS]\n", max);
printf("[EL PROMEDIO DE LITROS CARGADOS ES %f LITROS] \n", prom);
printf("[EL PORCENTAJE DE CARGAS MAYORES A 20 LITROS ES %f]", porcen);

}
