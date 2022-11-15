#include<stdio.h>

int main(){
    
     long long int N, primeiro = 0, segundo = 1, prox, t;
    int i, j;

    scanf("%lld", &t);

    
    for (i = 1; i <= t; i++)
    {
        primeiro = 0;
        segundo = 1;

        scanf("%lld", &N);
        
        N += 1;

        for (j = 0; j < N; j++)
        {
            if (j <= 1)
                prox = j;
            else
            {
                prox = primeiro + segundo;
                primeiro = segundo;
                segundo = prox;
            }
        }
        printf("Fib(%lld) = %lld\n", N - 1, prox);
    }
    
    return 0;
}