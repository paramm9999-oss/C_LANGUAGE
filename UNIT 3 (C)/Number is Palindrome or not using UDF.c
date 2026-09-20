#include <stdio.h>

int reverse(int n)
{
    int rev = 0, rem;

    while(n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    return rev;
}

int palindrome(int n)
{
    if(n == reverse(n))
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(palindrome(n))
        printf("Number is Palindrome");
    else
        printf("Number is not Palindrome");

    return 0;
}