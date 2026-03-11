#include <math.h>
#include <stdio.h>


int main() {

    int escolha;
    double valor, result;

    printf("1 - Metros para centimetros\n 2 - Metros para milimetros \n 3 - Metros para quilometros\n");

    scanf("%d", &escolha);

     if (escolha < 1 || escolha > 3) {
        printf("Opcao invalida");
        return 0;
    }

    printf("Digite o valor em metros\n");
    scanf("%lf", &valor);

    switch (escolha) {
        case 1:
            result = valor * 100;
            printf("%lf metros -> %lf centimetros", valor, result);
            break;
        case 2:
            result = valor * 1000;
            printf("%lf metros -> %lf milimetros", valor, result);
            break;
        default:
            result = valor / 1000;
            printf("%lf metros -> %lf quilometros", valor, result);
    }
    
    return 0;
}