#include <stdio.h>


int main(){
	int numero1;
	int numero2;
	 int resultado;
	printf("Hola mundo \n");
	printf("te voy a comer \n");
	printf("digite el primer numero a multiplicar: \n ");
	scanf("%i", &numero1);
	printf("digite el segundo numero a multiplicar: \n");
	scanf("%i", &numero2);
	 resultado = numero1*numero2;
	 printf("El resultado es: %i", resultado);
}