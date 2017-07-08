#include<stdio.h>
char nome[64];
char sobrenome[64];
char nomeCompleto[128];

int main(void){
	nome = "Ricardo";
	sobrenome = "Santiago";
	nomeCopleto = nome + sobrenome;
	printf("%s\n", nomeCompleto);
	return(0);
}
