#include<stdio.h>
#include<limits.h>
int main(void){
	int numero[4];
	float media =0;
	int maior= 	INT_MIN, menor= INT_MAX;
	for (int i=0; i<4; i++){
		printf("Digite 0 valor: %", i);
		scanf("%d", &numero[i]);
		media += numero[i];
		if (numero[i] > maior){
		maior = numero[i];
	}
		if (numero[i] < menor){
		menor = numero[i];
	}		
	}
	media /=4;
	printf("A media e = %.2f\nO maior = %d \nO menor = %d", media, maior, menor);
	
	return(0);
}
