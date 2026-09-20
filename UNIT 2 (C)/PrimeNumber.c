#include <stdio.h>

void main()
{
    int a,i,count=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("%d is a prime number",a);
    }
    else
    {
        printf("%d is not a prime number",a);
    }
}