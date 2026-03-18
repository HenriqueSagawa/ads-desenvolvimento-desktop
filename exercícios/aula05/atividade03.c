#include <stdio.h>

int main()
{
    int countVotesA = 0;
    int countVotesB = 0;
    int countVotesC = 0;
    int response = -1;

    do
    {
        printf("\n---- Eleicoes 2026/nEscolha um candidato ---- \n1 - Candidato A \n2 - Candidato B \n3 - Candidato C\n");
        scanf("%d", &response);

        if (response == 1)
        {
            countVotesA++;
        }
        else if (response == 2)
        {
            countVotesB++;
        }
        else if (response == 3)
        {
            countVotesC++;
        }
        else if (response != 0)
        {
            printf("Voce digitou um numero invalido, digite novamente\n");
        }
    } while (response != 0);

    char maior = 'A';
    int countMaior = countVotesA;

    if (countVotesB > countMaior)
    {
        maior = 'B';
    }

    if (countVotesC > countMaior)
    {
        maior = 'C';
    }

    printf("\n ---- Resultado ---- \n");
    printf("Candidato %c eh o vencedor!\n", maior);
    printf("Candidato A: %d \nCandidato B: %d \nCandidato C: %d", countVotesA, countVotesB, countVotesC);

    return 0;
}