#include<stdio.h>
int main(void) 
{   // nome do arquivo
	char url[]="test.txt";
	// nome
	char nome[20];
	//notas
	float nota1, nota2, nota3;
	//variavel pro arquivo
	FILE *arq;
	
	arq = fopen(url, "r");
	//r = reading
	//w = writing
	//a = append
	if( arq == NULL){
		printf ("Erro, nao foi possivel abrir o arquivo");
	}
	else{
		while((fscanf(arq,"%s %f %f", nome, &nota1, nota2, nota3))!= EOF){
				printf("%s teve medi %.2f\n", nome, (nota1+nota2+nota3)/3);	
		}
		fclose(arq);
	}
	return 0;
}
