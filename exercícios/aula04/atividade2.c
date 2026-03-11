#include <stdio.h>
#include <math.h>

int main()
{

    int escolha;
    double valor1, valor2;

    printf(" 1 - Soma \n 2 - Subtracao \n 3 - Multiplicacao \n 4 - Divisao \n 5 - Potencia \n 6 - Raiz Quadrada \n");
    scanf("%d", &escolha);

    if (escolha < 1 || escolha > 6) {
        printf("Opcao invalida");
        return 0;
    }

    switch (escolha)
    {
    case 1:
        printf("Digite um valor\n");
        scanf("%lf", &valor1);

        printf("Digite o segundo valor\n");
        scanf("%lf", &valor2);
        printf("%lf + %lf = %lf", valor1, valor2, valor1 + valor2);
        break;
    case 2:
        printf("Digite um valor\n");
        scanf("%lf", &valor1);

        printf("Digite o segundo valor\n");
        scanf("%lf", &valor2);
        printf("%lf - %lf = %lf", valor1, valor2, valor1 - valor2);
        break;
    case 3:
        printf("Digite um valor\n");
        scanf("%lf", &valor1);

        printf("Digite o segundo valor\n");
        scanf("%lf", &valor2);
        printf("%lf * %lf = %lf", valor1, valor2, valor1 * valor2);
        break;
    case 4:
        printf("Digite um valor\n");
        scanf("%lf", &valor1);

        printf("Digite o segundo valor\n");
        scanf("%lf", &valor2);
        printf("%lf /  %lf = %lf", valor1, valor2, valor1 / valor2);
        break;
    case 5:
        printf("Digite um valor\n");
        scanf("%lf", &valor1);

        printf("Digite o segundo valor\n");
        scanf("%lf", &valor2);
        printf("%lf elevado a %lf = %lf", valor1, valor2, pow(valor1, valor2));
        break;
    default:
        printf("Digite o valor\n");
        scanf("%lf", &valor1);
        printf("A raiz quadrada de %lf eh %lf", valor1, sqrt(valor1));
    }

    return 0;
}