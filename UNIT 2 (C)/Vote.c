#include <stdio.h>

int main()
{
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age >= 18)
        printf("Person is eligible for vote");
    else
        printf("Person is not eligible for vote");

    return 0;
}