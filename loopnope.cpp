#include<stdio.h>
int main ()
{
	int Count;
	char ch;
	printf(" Digite uma letra - <x para sair> ");
	for (Count=1;;Count++)
	{
		scanf("%c", &ch);
		if (ch == 'x') break;
		printf("\nLetra: %c \n",ch);
		scanf("%c", &ch);
		
		}
		return(0);	
}
