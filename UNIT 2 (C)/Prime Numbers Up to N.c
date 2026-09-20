#include <stdio.h>
//prime till n numbers
void main()
{
    int n,i,j,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
    {
        printf("%d is a prime number",i);
    }
    else
    {
        printf("%d is not a prime number",i);
    }
}