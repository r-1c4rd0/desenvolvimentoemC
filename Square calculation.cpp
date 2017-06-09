#include<stdio.h>
int square (int x)
{
	printf("o quadrado e %d",(x*x));
	return(0);
}
int main ()
{
	int num;
	printf("Entre com um numero\n");
	scanf ("%d", &num);
	printf("\n\n");
	square(num);
	return(0);
}
