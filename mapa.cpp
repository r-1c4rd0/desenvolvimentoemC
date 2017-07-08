#include<stdio.h>
int main (void){
	long int midi_chlorians =0;
	int qtd =0;
	printf("Informe a quantidade de Midi- chlorians:\n ");
	scanf("%d", &midi_chlorians);
	while (midi_chlorians <= 10000000)
	{
		if(midi_chlorians <= 100000)
	{
		for(int i =0; i<1; i++)
		{
			midi_chlorians = midi_chlorians*2;
			midi_chlorians += 1000;
			qtd +=1;
			printf("nivel: %d \nPadawan.  ", qtd);
			 
		}
		
	}
	else{
		if((midi_chlorians >= 100001) && (midi_chlorians <= 1000000))
	{
		for(int i =0; i<1; i++)
		{
			midi_chlorians = midi_chlorians*2;
			midi_chlorians += 1000;
			qtd +=1;
			printf("nivel: %d \nCavaleiro Jedi.  ", qtd); 
		}
		
	}
	else
	{
		if (midi_chlorians >= 1001000 )
	{
		for(int i =0; i<1; i++)
		{
			midi_chlorians = midi_chlorians*2;
			midi_chlorians += 1000;
			qtd = qtd++;
			printf("nivel: %d \nMestre Jedi.  ", qtd); 
		}
		
	}
	}
	}
    }
	printf("Quantidade de ciclos %d", qtd); 
	
	return(0);	

}
