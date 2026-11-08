/* Programa de calculo de frete*/
#include <stdio.h>

/*taxas constantes*/
#define TAXA_SUDESTE 1.20
#define TAXA_SUL 1.15
#define TAXA_NORTE 1.30

int main ()
{
    float peso;
    float frete;
    char regiao;

    printf("Digite o peso da encomenda em kg:");
    scanf("%f", &peso);

    printf("Digite a regiao:L (sul), S (sudeste) ou N (norte).");
    scanf(" %c", &regiao);
/*Aqui troquei   o if/else por switch case  pra manter o codigo mais  limpor e organizado*/
    switch (regiao) {
        case 'S':
            frete = peso * TAXA_SUDESTE;
            break;
        case 'L':
            frete = peso * TAXA_SUL;
            break;
        
        case 'N':
            frete = peso * TAXA_NORTE;
            break;

        default:
            printf("Região Invalida ou não atendida!\n");
            return 0;
    }

    /*Nessa secao temos a saida de dados.*/
    printf("Peso : %.2f kg\n", peso);
    printf("Região: %c\n", regiao);
    printf("Valor do frete: R$ %.2f\n", frete);

    return 0; 
    
}