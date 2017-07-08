#include<stdio.h>
int main(void)
{
	float notas[4];
	printf("digite a  nota 1: ");
	scanf("%f", &notas[0]);
	printf("digite a  nota 2: ");
	scanf("%f", &notas[1]);
	printf("digite a  nota 3: ");
	scanf("%f", &notas[2]);
	printf("digite a  nota 4: ");
	scanf("%f", &notas[3]);
	for (int i = 0; i<4; i++)
	{
		printf("suas notas é: %.2f  \n\n", notas[i]);
	}
	return(0);
}
