#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
void desenharLogomarca() {
    printf("====================================\n");
    printf("     _    ____  _______ ____  ______\n");
    printf("    / \\  / ___||__   __/ __ \\|  ____|\n");
    printf("   / _ \\ \\___ \\   | | | |  | | |__\n");
    printf("  / ___ \\ ___) |  | | | |  | |  __|\n");
    printf(" /_/   \\_\\____/   |_| |_|  |_|_\n");
    printf("\n");
    printf("====================================\n");
}

void mostrarMenu() {
    printf("Escolha uma das opções abaixo:\n");
    printf("1. Adicionar novo usuário\n");
    printf("2. Remover usuário\n");
    printf("3. Listar usuários\n");
    printf("4. Atualizar informaões do usuário\n");
    printf("5. Sair\n");
    printf("Digite sua opção (1-5): ");
}

int main() {
    setlocale(LC_ALL, "");
    int opcao;

    desenharLogomarca();

    while (1) {
        mostrarMenu();

        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("\nOpção 1 selecionada: Adicionar novo usuário.\n");
                break;
            case 2:
                printf("\nOpção 2 selecionada: Remover usuário.\n");
                break;
            case 3:
                printf("\nOpção 3 selecionada: Listar usuários.\n");
                break;
            case 4:
                printf("\nOpção 4 selecionada: Atualizar informaões do usuário.\n");
                break;
            case 5:
                printf("\nSaindo do programa...\n");
                exit(0);
            default:
                printf("Opção inválida");
                break;
        }
    }

    return 0;
}
