#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,c,average;
    printf("Enter three numbers: ");
    scanf("%f %f %f",&a,&b,&c);
    average=(a+b+c)/3;
    printf("The average of the three numbers is: %f",average);
    getch();
}