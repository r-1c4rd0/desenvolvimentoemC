#include <stdio.h>
int main(void){
	float nota[21];
	for (int i=0; i<21; i++){
		printf("Digite a nota numero:%d\n", i);
		scanf("%f", &nota[i]);		
	}
	for (int i=0; i<21; i++){
		printf("\nposicao: %d vetor: %.2f\n", i, nota[i]);
	}
	return(0);
}
