#include <stdio.h>
#include <stdlib.h>

int isPrime(int n)
{
    int i;

    if(n < 2)
        return 0;

    for(i = 2; i <= n / 2; i++)
    {
        if(n % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int n, i, sum = 0;
    int *a;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    a = (int *)malloc(n * sizeof(int));

    if(a == NULL)
    {
        printf("Memory allocation failed.");
        return 0;
    }

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if(isPrime(a[i]))
        {
            sum = sum + a[i];
        }
    }

    printf("Sum of prime numbers = %d", sum);

    free(a);

    return 0;
}