#include<stdio.h>
int somador(int limite);
int num;
int main(void){
	printf("Ate que numero voce quer somar os pares? ");
	scanf("&d", &num);
	printf("A soma dos pares ate %d e: %d\n\n", num, somador(num));
	return(0);
}
int somador(int limite){
	int soma = 0;
	for (int i=0; i<=num; i++){
		if(i % 2 == 0){
			soma += i;
		}
	}
	return soma;
}

