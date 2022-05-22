/* Autor: Xavier Romero Hernández, Realizado: 03/03/2022 
	Programa que pida numeros y los sume hasta que se introduzca un numero 0, usando ciclo do-while
	*/
	
#include <stdio.h>

int main(){
	int numero, suma;
	
	do{
		printf("Ingresa un numero: ");
		scanf("%d",&numero);
		suma=suma+numero;
	}while(numero!=0);
	
	printf("\nLa suma total es %d",suma);
	
	return 0;
}
