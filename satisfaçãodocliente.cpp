#include <stdio.h>
int main (){
	int idade, npessoas, npessoasi, npessoass, opiniao;
	float somai, media;
	npessoas = 0;
	npessoasi = 0;
	npessoass = 0;
	somai = 0;
	printf("\n Informe a idade: ");
	scanf("%d", &idade);
	do
	{
		printf("\n Informe sua opiniao: ");
		scanf("%d", &opiniao);
		
	}
	while((opiniao !=1 )&&(opiniao !=2 )&&(opiniao != 3) );
	while (idade!=0)
	{
		npessoas ++;
		if (opiniao ==1)
	{
		somai = somai + idade;
			npessoass++;
	}
	else
	{
		if(opiniao == 3)
		{
			npessoasi++;
		}

 	}
    
	printf("\n Informe a idade:");
	scanf("%d", &idade);
	do
	{
		printf("\n Informe sua opiniao: ");
		scanf("%d", &opiniao);
		
	}
	while((opiniao !=1 )&&(opiniao !=2 )&&(opiniao != 3) );
    }
    media = (somai/npessoass);
    printf("\n o numero de pessoas insatisfeita e :%d", npessoasi);
    printf("\n o numero de pessoas satisfeitas e: %d", npessoass);
    printf("\n a media de idade de pessoas satisfeitas e: %.2f", media);
    return(0);	
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
