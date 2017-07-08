#include<stdio.h>
int main (void){
	int valor;
	printf("digite um valor:");
	scanf("%d", &valor);
	while(valor != 0){
		printf("Digite um valor:");
		scanf("%d", & valor);
	}
	return(0);
}
