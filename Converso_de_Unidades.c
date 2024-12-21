#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

// Instrutura do MENU do Código

// Comprimento
float metroParaCentimetro(float metro)
{
    return metro * 100;
}

float metroParaMilimetro(float metro)
{
    return metro * 1000;
}
float centimetroparaMetro(float metro)
{
    return metro / 100;
}
float milimetroParaMetro(float metro)
{
    return metro / 1000;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int opcao, opcaocomp;
    float metro, resultado;

    while (1)
    { // MENU INTERATIVO
        printf("BEM VINDO AO PROGRAMA DE CONVERSÃO DE UNIDADES - EMBARCATECH:\n");
        printf("Escolha qual conversão gostaria de fazer:\n");
        printf(" Digite 1 - Unidades de Comprimento\n");
        printf(" Digite 2 - Unidades de Massa\n");
        printf(" Digite 3 - Unidades de Volume\n");
        printf(" Digite 4 - Unidades de Temperatura\n");
        printf(" Digite 5 - Unidades de Velocidade\n");
        printf(" Digite 6 - Unidades de Energia\n");
        printf(" Digite 7 - Unidades de Área\n");
        printf(" Digite 8 - Unidades de Tempo\n");
        printf(" Digite 9 - Unidades de Dados\n");
        printf(" Digite 10 - Caso deseje Sair do Sistema\n");
        printf(" Informe a sua escolha:\n");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("Conversão de Comprimento:\n");
            printf("1. Metro para Centímetro\n");
            printf("2. Metro para Milímetro\n");
            printf("3. Centimetro para Metro\n");
            printf("4. Milimetro para Metro\n");
            scanf("%d", &opcaocomp);
            printf("Digite o valor que deseja converter: \n");
            scanf("%f", &metro);
            if (opcaocomp == 1)
            {
                resultado = metroParaCentimetro(metro);

                printf("O valor é: %.2f cm \n", resultado);
            }
            else if (opcaocomp == 2)
            {
                resultado = metroParaMilimetro(metro);

                printf("O valor é: %.2f mm \n", resultado);
            }
            else if (opcaocomp == 3)
            {
                resultado = centimetroparaMetro(metro);

                printf("O valor é: %.2f m \n", resultado);
            }
            else if (opcaocomp == 4)
            {
                resultado = milimetroParaMetro(metro);

                printf("O valor é: %.2f m \n", resultado);
            }
            break;
        default:
            printf("Opção inválida!");
            break;
        }
    }
}