#include<stdio.h>	// biblioteca de entrada e sa�da.
int main (void){                           // in�cio da fun��o main.  
	long unsigned int midi_chlorians =0; //variavel do tamanho necess�rio para a aplica��o adequada ao programa.
	int qtd =0;                                                // variavel que controla o la�o de repeti��o.
	printf("Informe a quantidade de Midi- chlorians:\n "); // entrada de dados.
	scanf("%d", &midi_chlorians);   // leitura de dados.
	printf("\n informe o numero de ciclos:"); //define o numero de ciclos desejado.
	scanf("%d", &qtd);                                     // leitura de dados,* ENTRADA DE QUANTIDADE DE CICLOS.
	for (int i=0; i<qtd; i++)                             //la�o de repeti��o para controlar o treinamento do novo dic�pulo.
	{
		if(midi_chlorians % 2!=0){
			
			midi_chlorians = midi_chlorians*2;      // ciclo da For�a, o valor de midi-chlorians � dobrado.
		}
		else{
			midi_chlorians += 1000;				// ciclo Jedi, aumenta 1000 no valor atual. 
		}
			
	}
	if (midi_chlorians <= 100000)// Aqui come�a os desvios condicionais para ver qual sa�da, est� de acordo com os dados gerado no programa. Se midi-chlorians menor ou igual a cem mil, ser� execultado.
	{
		printf("==========\n Nivel:\n==========\n- Padawan. \n==========\n-FORCA: %d", midi_chlorians);  //ser� impresso se a condi��o for verdadeira.	 			
	}
	else
	{
		if((midi_chlorians >= 100001) && (midi_chlorians <= 1000000))  // segunda estrutura condicional.
	{
		printf("=========\n Nivel:\n==========\n- Cavaleiro Jedi. \n==========\n-FORCA: %d", midi_chlorians);   // as duas condi��es tem que ser v�lida, caso contr�rio nada ser� impresso.
	}		
	else
	{
		printf("=========\n Nivel:\n==========\n- Mestre Jedi.\n=========\n-FORCA: %d ", midi_chlorians);    // caso nenhuma das condi��es acima seja v�lidas ser� imprimido essa informa��o na tela.
	}
	}
				
	
	return(0);
}    //chave de fechamento da fun��o int main.


