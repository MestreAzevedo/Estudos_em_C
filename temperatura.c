// programa de monitoramento de temperatura. 
#include <stdio.h>

int main()
{
    float temperatura, soma, media, maior, menor;
    int contador;

    contador = 0;
    soma = 0; 

    printf("Digite a temperatura ou -1 para sair:");
    scanf("%f", &temperatura);

    if (temperatura != -1)
{
    maior = temperatura;
    menor = temperatura;
}

    while (temperatura != -1)
    {
        soma = soma + temperatura;
        contador++;

        if (temperatura > maior)
        {
            maior = temperatura; 
        }
        if (temperatura < menor)
        {
            menor = temperatura;
        }


        scanf("%f", &temperatura);


    }

    if (contador > 0)
    {
    media = soma / contador;
    printf("Media: %.2f\n", media);
    printf("Maior: %.2f\n", maior);
    printf("Menor: %.2f\n", menor);
    printf("Total de leituras: %d\n", contador);
    }

    else
    {
     printf("Nenhuma temperatura registrada.\n");
    }

}