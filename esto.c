/* Se leen la cantidad de habitantes en 5 comunas. Informar:
- Que porcentaje de habitantes tiene cada comuna en funcion al total
- Comuna con mayor cantidad de Habitantes
- Promedio de Habitantes por comuna
- Expresar en porcentajes la cantidad de comunas que tienen mas de 500 habitantes
*/

#include <stdio.h>
float promedio, porc_quinientos, porcentaje;
int i, N = 5, habitantes[5], total, comuna, cont, max;

main(){
	for(i = 0; i < N; i++)
	{
		printf("\n Ingrese la cantidad de habitantes de la Comuna N%d: ", i + 1);
		scanf("%d", &habitantes[i]);
		
		total = total + habitantes[i];
		
		if(habitantes [i] > 500)
		{
			cont = cont + 1;
			
		}
		
		if(habitantes [i] > max || i == 1)
		{
		
			max = habitantes[i];
			comuna = i + 1;
		}
	}

	for(i = 0;i< N;i++)
	{
		porcentaje = (habitantes[i] * 100) / total;	
		printf("\n Porcentaje de habitantes Comuna%d: %f", i + 1, porcentaje);
	}
	

	promedio = total / N;
    porc_quinientos = (cont * 100) / N;
	
	printf("\n Comuna con mayor Cantidad de Habitantes: %d", comuna);
	printf("\n El Promedio: %f", promedio);
	printf("\n Porcentaje de Hab Mayores a 500: %f", porc_quinientos);
	

}
