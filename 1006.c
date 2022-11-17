#include <stdio.h>
#include <stdlib.h>

int main()
{

    double A, B, C, media = 0;

    scanf("%lf %lf %lf", &A, &B, &C);

    media = ((A * 2) + (B * 3) + (C * 5)) / 10;

    printf("MEDIA = %.1lf\n", media);

    return 0;
}