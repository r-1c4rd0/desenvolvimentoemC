#include <stdio.h>
int main ()
{
	char buffer[10];
	printf("Entre com seu nome ");
	gets(buffer);
	printf("O nome eh:%s", buffer);
	return(0);
	
}
