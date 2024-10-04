#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");
 int a;
 float r,cot,dol;
    printf("\n\t\tMáquina de conversão");
    printf("\n\n\tEscolha o tipo de conversão:");
    printf("\n\t\t1 - Real -> Dolar");
    printf("\n\t\t2 - Dolar -> Real\n\n\t\t");
    scanf("%d",&a);
    switch (a)
    {
        case 1:
         printf("\n\tInforme o valor em reais: ");
         scanf("%f", &r);
         printf("\tInforme a cotação do dolar: ");
         scanf("%f", &cot);
         dol = r / cot;
         printf("\n\tO valor de %.2f em dolares é : %.2f\n", r, dol);
         getch();
         break;
            case 2:
             printf("\n\tInforme o valor em dolar: ");
             scanf("%f", &dol);
             printf("\tInforme a cotação do dolar: ");
             scanf("%f", &cot);
             r = dol * cot;
             printf("\n\tO valor de %.2f em reais é : %.2f\n", dol, r);
             getch();
             break;
                default:
                 printf("\n\t\tValor inválido\n");
                 getch();
    }
    return 0;
}
