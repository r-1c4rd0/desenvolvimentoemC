#include <stdio.h>
int x;
float a, b;
int main(void)
{
	a, b = 0;
	printf( "! - Somar * \n2 - subtrair * \n3 - dividir * \n4 - multiplicar *\n");
	printf("Escolha uma opcao: \n");
	scanf("%d", &x);
	printf("%f e %f",&a, &b);
	switch(x){
		case 1:
		printf("\nsera iniciado sua soma...");
		break;
		case 2:
		printf(" \nsera iniciado sua subtracao...");
		break;
		case 3:
		printf(" \nsera iniciado sua divisao... ");
		break;
		case 4:
		printf(" \nsera iniciado sua multiplicacao");
		break;
		default:
		printf("\nOpcao invalida!");
		
	}
	return(0);
}
