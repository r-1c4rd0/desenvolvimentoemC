#include <stdio.h>
int main (){
	char nome[30];
	int idade;
	printf("Digite o nome: ");
	scanf("%s", nome);
	printf("Digite a idade: ");
	scanf("%d", &idade);
	if (idade <= 18 )
	{
		printf("\n O Nome: %s", nome);
		printf("\n A Idade: %d", idade);
		printf("\n O Valor do plano R$ 50,00");
	}
	else 
	{
		if ((idade >= 19 ) && (idade <= 29))
		{
			printf("\n O Nome: %s", nome);
			printf("\n A Idade: %d", idade);
			printf("\n O Valor do plano R$ 70,00");	
		}
		else
		{
			if  ((idade >= 30) && (idade <= 45))
			{
				printf("\n O Nome: %s", nome);
		    	printf("\n A Idade: %d", idade);
				printf("\n O Valor do plano R$ 90,00");
			}
			else
				if ((idade >= 46) && (idade <= 65))
			{
				printf("\n O Nome: %s", nome);
				printf("\n A Idade: %d", idade);
				printf("\n O Valor do plano R$ 130,00");
			}
			else
			{
				printf("\n O Nome: %s", nome);
				printf("\n A Idade: %d", idade);
				printf("\n O Valor do plano R$ 170,00");
			}
		
		}
		
	
	}
	return(0);	
}
