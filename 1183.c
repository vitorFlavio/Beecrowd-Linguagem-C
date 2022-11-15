#include <stdio.h>

int main()
{

    char O[2];
    int i, j;
    float M[12][12], soma = 0, media = 0;

    scanf("%s", &O);

    for (i = 0; i <= 11; i++)
    {
        for (j = 0; j <= 11; j++)
        {
            scanf("%f", &M[i][j]);
        }
    }

    for (i = 0; i <= 11; i++)
    {
        for (j = 0; j <= 11; j++)
        {
            if (j > i)
            {
                soma += M[i][j];
            }
        }
    }
    if (O[0] == 'S')
    {
        printf("%.1f\n", soma);
    }
    else if (O[0] == 'M')
    {
        media = soma / 66.0;
        printf("%.1f\n", media);
    }

    return 0;
}