#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    printf("/nAddition = %d",a+b);
    printf("/nSubtraction = %d",a-b);
    printf("/nMultiplication = %d",a*b);
    printf("/nDivision = %d",a/b);
    printf("/nModulus = %d",a%b);
    getch();
}