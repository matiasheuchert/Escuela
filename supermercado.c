//Se desea realizar un programa para imprimir el ticket de un supermercado. Se ingresan el precio de cada producto junto con su cantidad. Se leen 3 productos.
//Informar cada vez el subtotal a pagar. Finalizada la carga, mostrar el total a pagar junto a la cantidad de productos que retire el cliente.
#include <stdio.h>

int cant, total, i, precio, prod, sub, peticion;
main(){

do {
	printf("Ingrese el precio del producto %d: \n", i+1);
	scanf("%d", &precio);
	printf("Ingrese la cantidad: \n");
	scanf("%d", &cant);
	prod = cant + prod;
	sub = cant * precio;
	total = (cant * precio) + sub;
	printf("Subtotal: %d \n", sub);

	printf("Desea agregar otro producto: \n Si = 1 \n No = 0 \n");
	scanf("%d", &peticion);
	}while(peticion == 1);
	printf("La cantidad de productos adquiridos es: %d \n", prod);
	printf("El total a pagar es: %d", total);
	}	
