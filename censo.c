#include <stdio.h>

int i, cant, edad, masc, fem, sexo, acum_ed;
float prom_ed, porc_masc, porc_final;

main()
{
	printf("Ingrese la cantidad de personas censadas: \n");
	scanf("%d", &cant);
	
	for(i = 0; i < cant; i++)
	{
		printf("Edad persona N %d \n", i+1);
		scanf("%d", &edad);
		edad_mas = edad_mas + edad;
		acum_ed = acum_ed + edad;
		printf("Ingrese el sexo: (1 si es masculino, o 2 si es Femenino) \n");
		scanf("%d", &sexo);
		
		if(sexo == 1){
			masc = masc + 1;
		}
		else if(sexo == 2){
			fem = fem + 1;
		}
	}
	porc_masc = (masc * 100) / cant;
	prom_ed = acum_ed / cant;
	printf("El promedio de edades es: %f \n", prom_ed);
	printf("El porcentaje de masculinos es: %f \n", porc_masc);
	printf("La cantidad de censados total es: %d \n", cant);
	
}
