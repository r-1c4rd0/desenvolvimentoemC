 #include<stdio.h>
int main(void) {
     int anoNascimento;
     printf("Digite o ano do seu nascimento: ");
     scanf("%d", &anoNascimento);
     if (anoNascimento % 2 == 0){
         printf("Voc� nasceu num ano PAR. \n");
     }else{
        printf("Voc� nasceu num ano IMPAR. \n");
    }
    return (0);
}
