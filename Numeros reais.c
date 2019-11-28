#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main()
{
		setlocale(LC_ALL,"portuguese");
	float n;
	printf("Digite o numero: \n");
		scanf("%f", &n);
	printf("Antecessor: %f e Sucessor: %f", n-1, n+1);
		
}
