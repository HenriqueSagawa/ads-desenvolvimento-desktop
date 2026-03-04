#include <stdio.h>

int main() {
    char nome[20];
    float preco;

    printf("Digite o nome do produto?\n");
    scanf("%s", nome);
    
    printf("Digite o valor do %s:\n", nome);
    scanf("%f", &preco);

    if (preco < 20) {
        printf("O produto %s eh barato", nome);
    } else if (preco >= 20 && preco < 100) {
        printf("O produto %s eh preco medio", nome);
    } else {
        printf("O produto %s eh caro", nome);
    }

    return 0;
}   