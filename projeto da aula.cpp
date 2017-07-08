#include<stdio.h>
#include<string.h>

int main(void)
{
	int i, t;
	char nome[40];
	printf("Digite o nome: ");
	scanf("%s", nome);
	t = strlen(nome);
	printf("o tamanho de %s eh %d\n", nome, t);
	for(i=0; i<t; i++){
		printf("%c\n\t\n", nome[i]);
	}
	return(0);
}
