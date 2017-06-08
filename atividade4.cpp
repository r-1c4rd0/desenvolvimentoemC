#include<stdio.h>
int num;
int main(void){
	printf("Digite um numero inteiro: ");
	scanf("%d",&num);
	if(num% 2 == 0){
		printf("O numero %d eh PAR !\n\n", num);
	}else{
		printf("O numero %d eh IMPAR !\n\n", num);
	}
	return(0);
}
