#include<stdio.h>
#include<conio.h>
void main()
{
    float a,square,cube;
    printf("Enter a number: ");
    scanf("%f",&a);
    
    square=a*a;
    cube=a*a*a;
    printf("Square of %f is: %f",a,square);
    printf("\nCube of %f is: %f",a,cube);
    getch();
}