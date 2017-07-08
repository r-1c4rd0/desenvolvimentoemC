#include<stdio.h>
int main(void){
	int vetorA[10];
	int i;
	for (i=0; i<10; i++){
		printf("\n informe um numero:");
		scanf("%d", & vetorA[i]);
		
	}
	for (i = 0; i<10; i++){
		printf("posição %d vetor %d",i, vetorA[i]);
		
	}
	return(0);
}
