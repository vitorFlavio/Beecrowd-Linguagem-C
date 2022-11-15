#include <stdio.h>
 
int main() {
 
    float soma1 = 0.0, soma2 = 0.0, somaT = 0.0, media = 0.0, M[12][12];
    char O[2];
    int i, j,cont=0;

    scanf("%s", &O);

    for (i = 0; i <= 11; i++)
    {
        for (j = 0; j <= 11; j++)
        {
            scanf("%f", &M[i][j]);
        }
    }

    for (i = 5; i >= 1; i--)
    {
        for (j = 7+cont; j <= 11; j++)
        {
            soma1 += M[i][j];
        }
        cont++;
    }

    cont=0;

    for (i = 6; i <= 10; i++)
    {
        for (j = 7+cont; j <= 11; j++)
        {
            soma2 += M[i][j];
        }
        cont++;
    }

    somaT=soma1+soma2;

    if (O[0] == 'S')
    {
        printf("%.1f\n", somaT);
    }
    else if (O[0] == 'M')
    {
        media = somaT / 30.0;
        printf("%.1f\n", somaT);
    }
 
    return 0;
}