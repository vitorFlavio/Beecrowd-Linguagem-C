#include <stdio.h>

int main()
{

    int N, i, menorElmento = 0, posicao = 0;

    scanf("%d", &N);

    int X[N];

    for (i = 0; i < N; i++)
    {

        scanf("%d", &X[i]);

        if (i == 0)
        {

            menorElmento = X[i];
            posicao = i;
        }

        if (X[i] < menorElmento)
        {
            menorElmento = X[i];
            posicao = i;
        }
    }

    printf("Menor valor: %d\nPosicao: %d\n", menorElmento, posicao);

    return 0;
}