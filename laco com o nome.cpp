#include <stdio.h>
int main(void){
	char nome[10];
	int i, num, enu;
	enu = 1;
	printf("Informe quantasa vezes quer a repeticao:");
	scanf("%d", &num);
	printf("\n Informe seu nome:");
	scanf("%s", nome);
	for (i=0; i<num; i++)
	{
		
		printf("\n %d O nome digitado e: %s", enu, nome);
		enu = enu+1;
	}
	return(0);
}
