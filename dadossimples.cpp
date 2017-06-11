#include <stdio.h>
#include <math.h>
char nome[64];
int idade;
float altura, peso, imc = 0;

 main (void){
	printf("Digite o nome : ");
	scanf("%s", nome);
	printf("Digite a idade : ");
	scanf("%d", &idade);
	printf("Digite a altura : ");
	scanf("%f", &altura);
	printf("Digite o peso : ");
	scanf("%f", &peso);
	printf(" ==== O meu nome eh\t%s ======= \n Tenho a idade de\t%d anos =======\n minha altura eh de \t%.2f metros =====\n meu peso eh\t%.2f Kg ======",nome, idade , altura, peso);
	imc = peso/pow(altura, 2);
	printf("\nO IMC eh : %.2f",imc );
	if(imc<#)
	{
		
		}	
	return (0);
	
}
