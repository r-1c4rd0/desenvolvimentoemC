#include<stdio.h>
int main (void){
	char nome[64];
	printf("informe seu nome: ");
	scanf("%s", nome);
	printf("Bom dia ", nome, ".\n");
	return(0);
}
