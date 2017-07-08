#include<stdio.h>
#include<limits.h>
int main(void){
	int n1, n2, n3, n4;
	float media;
	int maior, menor;
	printf("Digite um valor: ");
	scanf("%d", &n1);
	printf("Digite um valor: ");
	scanf("%d", &n2);
	printf("Digite um valor: ");
	scanf("%d", &n3);
	printf("Digite um valor: ");
	scanf("%d", &n4);
	maior= 	INT_MIN;
	menor = INT_MAX;
	media=(float)(n1+n2+n3+n4)/4;
	if (n2 > maior){
		maior = n2;
	}
	if (n3 > maior){
		maior = n3;
	}
	if (n4 > maior){
		maior = n4;
	}
	if (n2 < menor){
		menor = n2;
	}
	if (n3 < menor){
		menor = n3;
	}
	if (n4 < menor){
		menor = n4;
	}
	printf("A media e = %.2f\nO maior = %d \nO menor = %d", media, maior, menor);
	
	return(0);
}
