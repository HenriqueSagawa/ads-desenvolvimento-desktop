#include <stdio.h>

int main() {
    int count = 0;
    int response;
    int password = 1234;

    while (count < 3) {
        printf("Digite a senha: ");
        scanf("%d", &response);

        if (response != password) {
            printf("Senha incorreta!\n");
        } else {
            printf("Acesso permitido!\n");
            break;
        }

        if (count == 2) {
            printf("Conta bloqueada!!!");
        }

        count++;
    }

    return 0;
}