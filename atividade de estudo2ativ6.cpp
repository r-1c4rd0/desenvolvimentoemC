#include<stdio.h>

int main (void){
	int  n, fatorial=1;
	printf("Digite um numero: ");
	scanf("%d", &n);
	while (n >= 1){
		fatorial *= n--;
	}
	printf("O fatorial de %d é %d.", n, fatorial);
	return(0);	
}
