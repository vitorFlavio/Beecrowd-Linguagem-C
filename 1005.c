#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    double nota1, nota2, media = 0;

    scanf("%lf %lf",&nota1,&nota2); 


    media = ((nota1 * 3.5) + (nota2 * 7.5) )/ 11;

    printf("MEDIA = %.5lf\n", media);

    return EXIT_SUCCESS;
}