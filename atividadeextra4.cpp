#include<stdio.h>
int fatorial (int numero);
int main(void){
	int num;
	printf("Digite o numero: ");
	scanf("%d\n", &num);
	prinf("Fatorial = %d\n",fatorial(num));
}
int fatorial(int numero){
	if(numero == 1){
	    printf("Entrou no passo basico\n")	
		return 1;// passo básicoda recursividade.
	}
	printf("Numero = %d\n", numero)
	return numero*fatorial(numero-1); 
}
