#include <stdio.h>

int edad, i, guia;

main()


{
	for (i=0; i<10; i++)
	{
    printf ("Ingrese su edad: \n");
    scanf("%d", &edad);
    if (edad==0)
    {
    	i=10;
	}
    printf("Requiere un guia turistico? (1 para si, 0 para no) \n");
    scanf("%d", &guia);
	
	
    }
	
}
