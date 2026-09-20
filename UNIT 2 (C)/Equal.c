#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a == b)
        printf("Numbers are Equal");
    else
        printf("Numbers are Not Equal");

    return 0;
}