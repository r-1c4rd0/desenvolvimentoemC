#include <stdio.h>
#include <math.h>
int x;
float y;
int main (void)
{
	printf("Iforme um numero: ");
	scanf("%d", &x);
	printf("a quadrado desse numero e:  %d \n ", x*x);
	y = sqrt(x);
	printf("a raiz desse numero e: %.2f", y);
	return (0);
}
