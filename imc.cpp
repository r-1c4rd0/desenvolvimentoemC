#include <stdio.h>
#include <math.h>
int idade, nasc;
float imc, peso, altura;
int main (void)
{
	imc = 0;
	printf("Informe a idade: ");
	scanf("%d", &idade);
	printf("Informe seu peso: ");
	scanf("%f", &peso);
	printf("Informe sua altura: ");
	scanf("%f", &altura);
	imc = peso/pow(altura,2);
	printf("\n o valor do IMC eh : %f", imc);
	if (imc<20)
	{
		printf("\nAbaixo do peso! ")
	}
	else
	{
		
	}
	return(0);
}
