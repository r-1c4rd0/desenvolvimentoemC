#include <stdio.h>
#include <string.h>
void PrintSring (char *str, int (*func)(const char*));
main (void)
{
	char String [20]="Curso de C.";
	int (*p)(const char *); /* Declaracao do ponteiro para fun��o
							Fun��o apontada e inteira e recebe como parametro
							uma string constante	*/
	p=puts;			/* O Ponteiro p passa a apontar para a fun��o puts
						que tem o seguinte prototipo: int puts(const char *)*/
	PrintString (String, p);
	return 0;		
}
void PrintString (char *str, int (* func)(const char *))
{
	(* func)(str);   /* cahmada a fun��o atrav�s do ponteiro para fun��o */
	func(str);       /* maneira tamb�m v�lida de se fazer a chamada a fun��o puts
						atrav�s do ponteiro para fun��o func*/
}
