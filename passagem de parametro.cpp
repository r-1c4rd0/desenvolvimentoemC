#include<stdio.h>

void soma(int *x, int *y);


int main (){
	int a, b;
	int total;
	printf("Digite a: ");
	scanf("%d", &a);
	printf("Digite b:");
	scanf("%d", &b);
	soma(&a, &b);
	return(0);	
}
void soma (int *x, int *y)
{
	int soma;
	soma =  *x +  *y;
	printf("%d", soma);
}
