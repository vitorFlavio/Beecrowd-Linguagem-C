#include <stdio.h>

int main()
{

    int N, totalSaque = 0, totalBloqueio = 0, totalAtaque = 0, saque = 0, bloqueio = 0, ataque = 0;
    float percentualSaque = 0, percentualBloqueio = 0, percentualAtaque = 0;
    int S, B, A, S1, B1, A1;
    char nome[99];

    scanf("%d", &N);

    while (N > 0)
    {
        scanf("%s", nome);

        scanf("%d", &S);
        scanf("%d", &B);
        scanf("%d", &A);

        totalSaque += S;
        totalBloqueio += B;
        totalAtaque += A;

        scanf("%d", &S1);
        scanf("%d", &B1);
        scanf("%d", &A1);

        saque += S1;
        bloqueio += B1;
        ataque += A1;

        N--;
    }

    percentualSaque = ((float)100 * saque) / (float)totalSaque;
    percentualBloqueio = ((float)100 * bloqueio) / ((float)totalBloqueio);
    percentualAtaque = ((float)100 * ataque) / ((float)totalAtaque);

    printf("Pontos de Saque: %.2f %%.\n", percentualSaque);
    printf("Pontos de Bloqueio: %.2f %%.\n", percentualBloqueio);
    printf("Pontos de Ataque: %.2f %%.\n", percentualAtaque);

    return 0;
}