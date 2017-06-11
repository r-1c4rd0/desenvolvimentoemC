#include <stdio.h>
main (){
	float deposito, taxa, rendimento, total;
	printf(" Informe o valor do deposito:");
	scanf("%f",&deposito);
	printf("\n Informe a taxa de juros:");
	scanf("%f",&taxa);
	rendimento = deposito*(taxa/100);
	total= deposito + rendimento;
	printf("\n O rendimento eh: %.2f", rendimento);
	printf("\n O total eh: %.2f", total);
	return (0);	
}
