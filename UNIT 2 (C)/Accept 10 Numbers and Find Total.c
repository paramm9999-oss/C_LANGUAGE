#include <stdio.h>

int main()
{
    int i, n, total = 0;

    for (i = 1; i <= 10; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &n);

        total = total + n;
    }

    printf("Total = %d", total);

    return 0;
}