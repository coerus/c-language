#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1, num2, soma, subtracao, multi, div;
        
        printf("Calculadora 1.0\n");
        printf("Digite 2 numeros: \n");
	scanf("%i%i", &num1, &num2);

	soma = num1 + num2;
	subtracao = num1 - num2;
	multi = num1 * num2;
	div = num1 / num2;

	printf("a soma e: %i\n", soma);
	printf("a subtracao e: %i\n", subtracao);
	printf("a multi e: %i\n ", multi);
	printf("a div e: %i\n", div);
	


	return 0;
	
}
