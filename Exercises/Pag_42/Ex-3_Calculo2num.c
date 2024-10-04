#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    puts("\n\t\t Operações entre dois números\n");

    float soma, n1, n2, div, sub, mul;

    printf("Escreva o primeiro número: ");
    scanf("%f", &n1);
    fflush(stdin);
    printf("Escreva o segundo número: ");
    scanf("%f", &n2);
    fflush(stdin);
    printf("\n\n");
    if((n1 && n1) != 0)
    {
        soma = n1 + n2;
        div = n1 / n2;
        mul = n1 * n2;
        sub = n1 - n2;
        printf("   Soma          --- %.1f + %.1f = %.1f \n", n1, n2, soma);
        printf("   Subtração     --- %.1f - %.1f = %.1f \n", n1, n2, sub);
        printf("   Multiplicação --- %.1f / %.1f = %.1f \n", n1, n2, mul);
        printf("   Divisão       --- %.1f * %.1f = %.1f \n", n1, n2, div);
    }
    else
      {
          puts("Valor inválido");
      }
    printf("\n\n");
    return 0;
}
