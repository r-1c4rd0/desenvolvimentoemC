#include<stdio.h>
int main(void)
{
	int vetorA[10];
	int i;
	for (i=0; i<10; i++)
	{
		printf("\n Digite o %d elemento:", i);
		scanf("%d", &vetorA[i]);
	}
	printf("\n Vetor preenchido");
	for (i=0; i<10; i++)
	{
		printf("\n O elemento na posicao %d e: %d", i, vetorA[i]);
	}
	return(0);
}
