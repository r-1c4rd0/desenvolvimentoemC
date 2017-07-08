#include <stdio.h>
long double RESULTADO;
int MICH, CICLO, GURR;
int main(void) {

printf ("\nEscreva o valor inicial de midi-chlorians? ");
scanf ("%i", &MICH);
printf ("\nEscreva o numero de ciclos? ");
scanf ("%i", &CICLO);

    RESULTADO = ((MICH * CICLO) + (CICLO * GURR));


    if (RESULTADO <= 100000) {
    printf("\nVoce e um PADAWAN, Parabens!");
    printf("\nResultado:", RESULTADO);    	
                           }
    if ((RESULTADO >= 100000) && (RESULTADO <= 1000000)) {
    printf ("\nVoce e um GUERREIRO JEDI, Parabens!");
    printf("\nResultado:", RESULTADO);        
                                                }
    if (RESULTADO >= 1000000)  {
    printf ("\nVoce e um  MASTER JEDI, Parabens!");
    printf ("\nResultado:", RESULTADO);         
                  }
    
    
	
	return (0);
}
