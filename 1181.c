#include <stdio.h>

int main()
{

    float operacao = 0.0, M[12][12];
    int L, i, j;
    char T[2];

    scanf("%d", &L);
    scanf("%s", &T);

    for (i = 0; i <= 11; i++)
    {
        for (j = 0; j <= 11; j++)
        {
            scanf("%f", &M[i][j]);

            if (i == L)
                operacao += M[i][j];
        }
    }

    if (T[0] == 'S')

        printf("%.1f\n", operacao);

    else if (T[0] == 'M')
    {
        operacao = operacao / 12.0;
        printf("%.1f\n", operacao);
    }

    return 0;
}