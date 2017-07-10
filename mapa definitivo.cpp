#include<stdio.h>	// biblioteca de entrada e saída.
int main (void){                           // início da função main.  
	long unsigned int midi_chlorians =0; //variavel do tamanho necessário para a aplicação adequada ao programa.
	int qtd =0;                                                // variavel que controla o laço de repetição.
	printf("Informe a quantidade de Midi- chlorians:\n "); // entrada de dados.
	scanf("%d", &midi_chlorians);   // leitura de dados.
	printf("\n informe o numero de ciclos:"); //define o numero de ciclos desejado.
	scanf("%d", &qtd);                                     // leitura de dados,* ENTRADA DE QUANTIDADE DE CICLOS.
	for (int i=0; i<qtd; i++)                             //laço de repetição para controlar o treinamento do novo dicípulo.
	{
		if(midi_chlorians % 2!=0){
			
			midi_chlorians = midi_chlorians*2;      // ciclo da Força, o valor de midi-chlorians é dobrado.
		}
		else{
			midi_chlorians += 1000;				// ciclo Jedi, aumenta 1000 no valor atual. 
		}
			
	}
	if (midi_chlorians <= 100000)// Aqui começa os desvios condicionais para ver qual saída, está de acordo com os dados gerado no programa. Se midi-chlorians menor ou igual a cem mil, será execultado.
	{
		printf("==========\n Nivel:\n==========\n- Padawan. \n==========\n-FORCA: %d", midi_chlorians);  //será impresso se a condição for verdadeira.	 			
	}
	else
	{
		if((midi_chlorians >= 100001) && (midi_chlorians <= 1000000))  // segunda estrutura condicional.
	{
		printf("=========\n Nivel:\n==========\n- Cavaleiro Jedi. \n==========\n-FORCA: %d", midi_chlorians);   // as duas condições tem que ser válida, caso contrário nada será impresso.
	}		
	else
	{
		printf("=========\n Nivel:\n==========\n- Mestre Jedi.\n=========\n-FORCA: %d ", midi_chlorians);    // caso nenhuma das condições acima seja válidas será imprimido essa informação na tela.
	}
	}
				
	
	return(0);
}    //chave de fechamento da função int main.


