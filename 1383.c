#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int n, k = 0, i, j, z, cont = 0;
    int matriz[9][9];

    scanf("%d", n);

    while (n > 0)
    {

        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 9; j++)
            {
                scanf("%d", &matriz[i][j]);
            }
        }

        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 9; j++)
            {
                for (z = 0; z < 9; z++)
                {
                    if (i != z)
                    {
                        if (matriz[i][j] != matriz[z][j])
                        {
                            cont++;
                        }
                    }
                }
            }
        }

        k++;

        printf("Instancia %d\n", k);
        if (cont == 648)
        {
            printf("SIM\n");
        }
        else
        {
            printf("NAO\n");
        }

        n--;
        cont=0;
    }

    return EXIT_SUCCESS;
}