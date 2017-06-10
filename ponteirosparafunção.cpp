#include <stdio.h>
#include <string.h>
void PrintSring (char *str, int (*func)(const char*));
main (void)
{
	char String [20]="Curso de C.";
	int (*p)(const char *); /* Declaracao do ponteiro para função
							Função apontada e inteira e recebe como parametro
							uma string constante	*/
	p=puts;			/* O Ponteiro p passa a apontar para a função puts
						que tem o seguinte prototipo: int puts(const char *)*/
	PrintString (String, p);
	return 0;		
}
void PrintString (char *str, int (* func)(const char *))
{
	(* func)(str);   /* cahmada a função através do ponteiro para função */
	func(str);       /* maneira também válida de se fazer a chamada a função puts
						através do ponteiro para função func*/
}
