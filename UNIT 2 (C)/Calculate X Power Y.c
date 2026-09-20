#include <stdio.h>

int main()
{
    int x, y, i, power = 1;

    printf("Enter X: ");
    scanf("%d", &x);

    printf("Enter Y: ");
    scanf("%d", &y);

    for (i = 1; i <= y; i++)
        power = power * x;

    printf("%d^%d = %d", x, y, power);

    return 0;
}