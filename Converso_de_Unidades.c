#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <locale.h>

//Instrutura do MENU do Código

int main( ){
    setlocale(LC_ALL, "Portuguese");
    int opcao;

//Comprimento
float metroParaCentimetro(float metro) {
    return metro * 100;
}

float metroParaMilimetro(float metro) {
    return metro * 1000;
}

    while(1){ // MENU INTERATIVO
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
    scanf("%d",&opcao);
    
    switch(opcao){
<<<<<<< HEAD
        case 1:
        printf("Conversão de Comprimento:\n");
        printf("1. Metro para Centímetro\n");
        printf("2. Metro para Milímetro\n");
        break;
=======
        
        case 4:
           float cel, kel, fah;
    int op;

    printf("Escolha o tipo de conversão:\n");
    printf("1. Kelvin para Celsius.\n");
    printf("2. Kelvin para Fahrenheit.\n");
    printf("3. Fahrenheit para Celsius.\n");
    printf("4. Fahrenheit para Kelvin.\n");
    printf("5. Celsius para Kelvin.\n");
    printf("6. Celsius para Fahrenheit.\n");
    scanf("%d", &op);

    switch (op) {
        case 1:
            printf("Digite a temperatura em Kelvin: \n");
            scanf("%f", &kel);
            cel = kel - 273.15;
            printf("A temperatura em Celsius é: %.2f\n", cel);
            break;

        case 2:
            printf("Digite a temperatura em Kelvin: \n");
            scanf("%f", &kel);
            fah = ((kel - 273.15) * (9.0 / 5)) + 32;
            printf("A temperatura em Fahrenheit é: %.2f\n", fah);
            break;

        case 3:
            printf("Digite a temperatura em Fahrenheit: \n");
            scanf("%f", &fah);
            cel = (fah - 32) * (5.0 / 9);
            printf("A temperatura em Celsius é: %.2f\n", cel);
            break;

        case 4:
            printf("Digite a temperatura em Fahrenheit: \n");
            scanf("%f", &fah);
            kel = ((fah - 32) * (5.0 / 9)) + 273.15;
            printf("A temperatura em Kelvin é: %.2f\n", kel);
            break;

        case 5:
            printf("Digite a temperatura em Celsius: \n");
            scanf("%f", &cel);
            kel = cel + 273.15;
            printf("A temperatura em Kelvin é: %.2f\n", kel);
            break;

        case 6:
            printf("Digite a temperatura em Celsius: \n");
            scanf("%f", &cel);
            fah = (cel * (9.0 / 5)) + 32;
            printf("A temperatura em Fahrenheit é: %.2f\n", fah);
            break;

        default:
            printf("Opção inválida\n");
            break;
    }
        break;

            case 1:
                if (subOpcao == 1) {
                    resultado = metroParaCentimetro(valor);
                    printf("%.2f metros = %.2f centimetros\n", valor, resultado);
                } else if (subOpcao == 2) {
                    resultado = metroParaMilimetro(valor);
                    printf("%.2f metros = %.2f milimetros\n", valor, resultado);
                }
                break;
        









    }

    }
       

}

