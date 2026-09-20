#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, length = 0;

    printf("Enter a string: ");
    gets(str);

    // Using string function
    printf("Length using strlen() = %d\n", strlen(str));

    // Without using string function
    for(i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    printf("Length without string function = %d\n", length);

    return 0;
}