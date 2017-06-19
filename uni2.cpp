#include <stdio.h>
int main (void)
{
	int num[5], menor, maior, i;
	menor=0, maior=0;
	for (i = 0; i<5; i++)
	{
		printf ("Informe um valor:");
		scanf("%d", &num[i]);
		if (i == 0)
		{
			maior = num[i];
			menor = num[i];
		}
		else
		{
			if (num[i] < menor)
			{
					menor=num[i];
			}
			if (num[i]> maior)
			{
					maior= num[i];
			}
				
		}
		
		
	}
	printf("\n O valor maior eh: %d", maior);
	printf("\n O valor menor eh: %d", menor);
	return (0);	
}
