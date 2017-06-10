#include <stdio.h>
int main (){
	int num, i, qtdade;
	
	printf("\n Informe o numero:" );
	scanf("%d", &num);
	qtdade = 0;
	for ( i=1; i<=num; i++)
	{
		if (num % i == 0)
		qtdade ++;
	}
	if (qtdade == 2)
		printf("\n O numero eh primo.");
	else
		printf("\n Nao eh primo. ");
	return (0);		
}
