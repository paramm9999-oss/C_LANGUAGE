//Write a program to convert temperature Fahrenheit to Celsius
#include<stdio.h>
#include<conio.h>
void main()

{
    float F,C;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f",&F);
    C=(F-32)*5/9;
    printf("Temperature in Celsius is: %f",C);
    getch();
}
