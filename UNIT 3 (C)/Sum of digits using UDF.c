#include <stdio.h>

int sumOfDigits(int n)
{
    int sum = 0, rem;

    while(n != 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }

    return sum;
}

int main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = sumOfDigits(n);

    printf("Sum of digits = %d", result);

    return 0;
}