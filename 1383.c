#include <stdio.h>
#include <string.h>

int main()
{
    int matriz[9][9], testador[10], i, j, k, cont=0, n, teste = 0;

    scanf("%d", &n);

    while (n > 0)
    {

        teste = 0;

        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 9; j++)
            {
                scanf("%d", &matriz[i][j]);
            }
        }

        for (i = 0; i < 9 && !teste; i++)
        {
            memset(testador, 0, sizeof(testador));

            for (j = 0; j < 9 && !teste; j++)
            {
                if (testador[matriz[i][j]])
                    teste = 1;
                else
                    testador[matriz[i][j]] = 1;
            }
        }

        for (i = 0; i < 9 && !teste; i++)
        {
            memset(testador, 0, sizeof(testador));
            for (j = 0; j < 9 && !teste; j++)
            {
                if (testador[matriz[j][i]])
                    teste = 1;
                else
                    testador[matriz[j][i]] = 1;
            }
        }

        for (i = 2; i < 9 && !teste; i += 3)
        {
            memset(testador, 0, sizeof(testador));
            for (j = i - 2; j <= i && !teste; j++)
            {
                for (k = i - 2; k <= i && !teste; k++)
                {
                    if (testador[matriz[j][k]])
                        teste = 1;
                    else
                        testador[matriz[j][k]] = 1;
                }
            }
        }
        
        cont++;

        printf("Instancia %d\n", cont);
        printf("%s\n\n", (!teste) ? "SIM" : "NAO");

        n--;
    }

    return 0;
}