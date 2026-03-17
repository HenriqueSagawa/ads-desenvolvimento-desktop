#include <stdio.h>

int main() {
    int response;
    int countEvenNums = 0;
    int count = 0;

    while (response != 0) {
        if (count == 0) {
            printf("Digite um numero inteiro: ");
        } else {
            printf("Digite novamente: ");
        }
        scanf("%d", &response);

        if (response > 0) {
            countEvenNums++;
        }

        printf("Digite 0 para sair\n");

        count++;
    }

    printf("Voce digitou %d numeros positivos", countEvenNums);
}