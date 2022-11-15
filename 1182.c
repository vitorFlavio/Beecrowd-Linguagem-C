#include <stdio.h>

int main()
{

    int C, i, j;
    float soma = 0.0, media = 0.0, M[12][12];
    char T[2];

    scanf("%d", &C);
    scanf("%s", &T);

    for (i = 0; i <= 11; i++)
    {
        for (j = 0; j <= 11; j++)
        {
            scanf("%f", &M[i][j]);
            if (j == C)
                soma += M[i][j];
        }
    }

    if (T[0] == 'S')
    {
        printf("\n%.1f\n", soma);
    }

    else if (T[0] == 'M')
    {
        media = soma / 12.0;
        printf("%.1f\n", media);
    }

    return 0;
}