#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Instrutura do MENU do Código

int main( ){
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
        case 1:
        printf("Conversão de Comprimento:\n");
        printf("1. Metro para Centímetro\n");
        printf("2. Metro para Milímetro\n");
        break;










    }

    }
       

}
int main() {
    int opcao, subOpcao;
    float valor, resultado;

    do {
        exibirMenuPrincipal();
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Saindo...\n");
            break;
        }

        exibirMenuConversao(opcao);
        scanf("%d", &subOpcao);

        printf("Digite o valor a ser convertido: ");
        scanf("%f", &valor);

        switch (opcao) {
            case 1:
                if (subOpcao == 1) {
                    resultado = metroParaCentimetro(valor);
                    printf("%.2f metros = %.2f centimetros\n", valor, resultado);
                } else if (subOpcao == 2) {
                    resultado = metroParaMilimetro(valor);
                    printf("%.2f metros = %.2f milimetros\n", valor, resultado);
                }
                break;
