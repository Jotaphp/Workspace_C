#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <locale.h>
#include <time.h> //biblioteca que add rand() e srand(time())

int main()
{
 setlocale(LC_ALL, "Portuguese");
  int a;
  int num1;
  int dobro1;
  srand(time(0));// Inicializa a semente para a geração de números aleatórios
  int num2 = rand()%100;//Gera um número entre 0 e 99
  int dobro2 = num2*2;

  printf("\n\t\tBem-vindo a máquina do dobro\n");
  printf("\n\t\t\tEscolha:\n");
  printf("\t1 - Para escrever o próprio número\n\t2 - Para utilizar um número aleatório\n\n\t");
  scanf("%d",&a);
   switch (a)
   {
    case 1 :
     printf("\t\tInforme o número: ");
     scanf("%d",&num1);
     dobro1=num1*2;
     printf("\t\tO dobro é: %d \n",dobro1);
     getch();
     break;
    case 2 :
     printf("\t\tO número aleatorio é: %d\n", num2);
     printf("\t\tO dobro do número é: %d\n", dobro2);
     getch();
     break;
    default:
     printf("\t\tValor inválido...");
     getch();
   }
 return 0;
}
