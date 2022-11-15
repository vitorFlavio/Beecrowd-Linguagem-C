#include <stdio.h>

int main()
{

    int N[1000], T, i, x;

    scanf("%d", &T);

    for (i = 0, x = 0; i < 1000; i++)
    {
        printf("N[%d] = %d\n", i, x);

        x++;

        if (x == T)
        {
            x = 0;
        }
    }

    return 0;
}