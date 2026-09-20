#include <stdio.h>

int armstrong(int n)
{
    int original, rem, sum = 0;

    original = n;

    while(n != 0)
    {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }

    if(sum == original)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(armstrong(n))
        printf("Number is Armstrong");
    else
        printf("Number is not Armstrong");

    return 0;
}