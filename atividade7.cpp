#include<stdio.h>
float conversor (float valor, float taxa);
float euros, cotacao, reais;
int main(void){
	printf("Digite a quantidade de Euros: ");
	scanf("%f", &euros);
	printf("Digite a cotacao do Euro: ");
	scanf("%f", &cotacao);
	reais = conversor(euros, cotacao);
	printf("O valor de %.2f Euros em R$ na cotacao de R$ %.2f eh : %.2f\n\n", euros,cotacao,reais);
	return(0);
}
float conversor(float valor, float taxa){
	return valor * taxa;
}
