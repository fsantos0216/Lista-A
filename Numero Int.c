#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main()
{
		setlocale(LC_ALL,"portuguese");
	float n1, n2;
	printf("Digite o 1� numero: \n");
		scanf("%f", &n1);
	printf("Digite o 2� numero: \n");
		scanf("%f", &n2);
	printf("Numeros Reais: %f %f", n1, n2);
}
