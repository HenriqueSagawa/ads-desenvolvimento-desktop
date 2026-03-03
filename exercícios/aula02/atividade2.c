#include <stdio.h>

int main() {
    char nome[50];
    int idade;
    float altura;

    printf("Digite o seu nome\n");
    scanf("%s", nome);
    printf("Digite sua idade\n");
    scanf("%d", &idade);
    printf("Digite sua altura\n");
    scanf("%f", &altura);

    printf("nome: %s \nidade: %d \naltura: %.2f", nome, idade, altura);
    return 0;
}