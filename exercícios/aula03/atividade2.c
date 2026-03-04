#include <stdio.h>

int main() {
    float peso;
    float frete;
    
    printf("Digite o peso do pacote em KG\n");
    scanf("%f", &peso);

    if (peso <= 0) {
        printf("Peso inválido");
    } else if (peso <= 1) {
        frete = 10;
    } else if (peso > 1 && peso <= 5) {
        frete = 20;
    } else {
        frete = 35;
    }

    printf("O valor final do frete e: R$ %.2f\n", frete);

    return 0;
}