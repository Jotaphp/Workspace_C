// 1- Escreva um progama em C que apresenta um menu de opções para a escolha do time de futebol de alguém.
#include <stdio.h>
#include <math.h>
#include <locale.h>


 int main(void){
    setlocale(LC_ALL,"");
        int n;
        char time[100];
        puts("Escolha o número correspondente ao seu time de futebol!\n");
        puts("1 - Corinthians\t\t2 - Botafogo\n");
        puts("3 - Palmeiras\t\t4 - Gremio\n");
        puts("\t     5 - Outros");
        scanf("%i", &n);

        switch (n)
        {
             case 1 :
            printf("\nO time escolhido foi: Corinthians");
            break;
             case 2 :
            printf("\nO time escolhido foi: Botafogo");
            break;
             case 3 :
            printf("\nO time escolhido foi: Palmeiras");
            break;
             case 4 :
            printf("\nO time escolhido foi: Gremio");
            break;

            case 5:
            printf("Informe o time\n");
             fflush(stdin);
             gets(time);
            printf("\nO time escolhido foi: %s",time);
            break;
            default:
                printf("Número invalido");
                getch();
        }

        return 0;


}
