#include <stdio.h>
int main (void){
	float deposito, taxa, total, rendimento;
	printf("Informe o valor de deposito: ");
	scanf("%f", &deposito);
	printf("\n Informe a taxa: ");
	scanf("%f", & taxa);
	rendimento = deposito* (taxa/100);
	total = deposito + rendimento;
	printf("\n O valor do rendiemento eh: %.2f",rendimento);
	printf("\n O valor total: %.2f", total);
	return(0);
	
}
