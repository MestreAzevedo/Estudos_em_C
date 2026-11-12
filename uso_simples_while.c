#include <stdio.h>

int main()
{
    int codigo;
    int movimentacao = 0;

    printf ("Digite o codigo da movimentacao (0000 para sair)");

    while (scanf("%d", &codigo) !=1) {
        printf("Por favor digite um codigo valido.\n");

        while (getchar() != '\n') {
            //limpando buffer baby. 
        }
        printf("Digite o codigo da movimentacao (0000 para sair) ");

    }

    while (codigo != 0000) {
        movimentacao ++;
        printf (" movimentacao : %d\n", movimentacao);
        printf ("Digite o codigo da movimentacao (0000 para sair)");
        while (scanf("%d", &codigo) != 1) {
            printf("Por favor, digite um codigo valido.\n");

            while (getchar() != '\n') {
                // Limpando o buffer baby.
            }

            printf("Digite o codigo da movimentacao (0000 para sair): ");
        }
        
    }
    printf("Total de movimentacoes: %d\n", movimentacao);

    return 0;
}