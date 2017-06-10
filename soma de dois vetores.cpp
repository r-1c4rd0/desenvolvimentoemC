#include <stdio.h>
main (){
	int vetorA[30], vetorB[30], vetorC[30];
	int i, j, troca;
	for (i=0; i<30; i++)
	{
		printf("Digite o %d elemento do vetor A:", i);
		scanf("%d", &vetorA);
		printf("Digite o %d elemnto do vetor B:", i);
		scanf("%d", &vetorB);
		vetorC[i] = vetorA[i] + vetorB[i];
	}
	for (i=0; i<29; i++)
	{
		for(j=i+1; j<30; j++)
		{
			if (vetorC[i] > vetorC[j])
			{
				troca = vetorC[i];
				vetorC[i] = vetorC[j];
				vetorC[j] = troca;
			}
		}
	}
	for (i=0; i<30; i++)
	{
		printf("%d -", vetorC[i]);
	}
	return (0);
}
