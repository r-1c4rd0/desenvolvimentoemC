#include<stdio.h>

int soma(void);

int main (void){
	int total = 0;
	total = soma();
	printf("%d", total);
	
	
	return(0);
}
int soma (void){
	int a, b;
	printf("Digite a: ");
	scanf("%d", &a);
	printf("Digite b:");
	scanf("%d", &b);
	return(a + b);
}
