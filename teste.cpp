#include <stdio.h>
int main (void) {
	//int i;
	char nome[32];
	printf("Informe seu nome :");
	scanf("%s",  nome);
	for (int i=0; i<20; i++){
	;
		printf(" === %s*\t%s \n====\n====\n===\t%s", nome, nome);
	}
	return(0);
}
