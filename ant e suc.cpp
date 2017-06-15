#include <stdio.h>
int main (void)
{
	int num, ant, suc;
	printf("Informe um valor :");
	scanf("%d", & num);	
	printf("\n Impresso o antecessor: %d", num-1);
	printf("\n Impresso o sucessor : %d", num +1);
	return(0);
}
