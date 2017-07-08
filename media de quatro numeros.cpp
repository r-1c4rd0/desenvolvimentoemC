#include<stdio.h>
int main(void){
	
	int n1, n2, n3, n4;
	int maior, menor;
	float media;
	printf("Digite um numero\n:");
	scanf("%d", &n1);
	printf("Digite um numero\n: ");
	scanf("%d", &n2);
	printf("Digite um numero\n: ");
	scanf("%d", &n3);
	printf("Digite um numero\n: ");
	scanf("%d", &n4);
	media = (float)(n1+n2+n3+n4)/4;
	maior = n1;
	menor = n1;
	if (n2 > maior){
		maior = n2;
	}
	if(n3 > maior){
		maior = n3;
	}
	if(n4 > maior){
		maior = n4;
	}
	if(n2 < menor){
		menor = n2;
	}
	if(n3 < menor){
		menor = n3;
	}
	if(n4 < menor){
		menor = n4;
	}
	printf("Media = %.2f", media);
	printf("maior = %d", maior);
	printf("menor = %d", menor);
	return(0);
	
}

