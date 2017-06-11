#include <stdio.h>
#include <stdlib.h>
void main (int argc, char *argv[])
{
int mes;
char *nomemes [] = {"Janeiro","Fevereiro","Março","Abril","Maio",
					"Junho","Julho","Agosto","Setembro","Outubro",
					"Novembro","Dezembro"};
if (argc == 4)/* Testa se o numero de parametros fornecidos esta correto
				o primeiro parametro e o nome do programa o segundo dia 
				o terceiro o mes e o quarto os dois ultimos algarismo do ano*/
{
	mes = atoi (argv[2]); /* argv contem a string referente ao mes deve ser 
							transformada em um inteiro . A funcao atoi esta 
							sendo usada para isto recebe  a string e transforma no 
							inteiro equivalente */
	if (mes<1 || mes>12) /* Testa se o mes e valido*/
		printf("Erro!\nUso: data dia ano, todos inteiros ");
	else
		printf("\n%s de %s de 19%s", argv[1], nomemes[mes-1])							
				}				
}

