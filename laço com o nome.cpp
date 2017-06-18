#include <stdio.h>
int main(void){
	char nome;
	int i;
	printf("\n Informe seu nome:");
	scanf("%s", nome);
	for (i=0; i<10; i++)
	{
		printf("\n O nome digitado e: %s", nome);
	}
	return(0);
}
