#include <stdio.h>

void multiplicacionPorValor(int num1,int num2);
void multiplicacionPorReferencia(int* num1,int* num2);


int main()
{
	int x = 10, y = 15;
	int* apuntadorx = &x;
	int* apuntadory = &y;

	return 0;
}

void multiplicacionPorValor(int num1, int num2)
{
	num1 = 5 * num1;
	num2 = 5 * num2;
	printf("El resultado dentro de la función es %d, %d\n", num1, num2);
}

void multiplicacionPorReferencia()