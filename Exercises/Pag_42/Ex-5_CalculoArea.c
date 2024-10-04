#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <conio.h>


int main()
{
setlocale(LC_ALL, "Portuguese");
 float c,l,a;
    printf("\n\t\tCalculadora de área (metros)");
     printf("\n\n\tInforme o comprimento da sala: ");
     scanf("%f", &c);
     fflush(stdin);
      printf("\tInforme a largura da sala: ");
      scanf("%f", &l);
        a = c*l;
    printf("\n\tA área é: %.2f² \n", a);
    getch();
    return 0;
}
