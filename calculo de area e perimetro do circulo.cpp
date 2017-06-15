#include <stdio.h>
#include <math.h>
#define pi 3.141593
int main (void)
{
	float r;
	printf ("Digite o valor do raio: ");
	scanf("%f", &r);
	printf("\n O valor da area e: %.2f",pi *pow(r,2));
	printf("\n O valor do perimetro e: %.2f", 2*pi*r);
	return(0);
}
