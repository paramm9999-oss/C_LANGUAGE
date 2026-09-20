#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,area;
    printf("Enter the length and width of the rectangle: ");
    scanf("%f %f",&a,&b);
    
    area=a*b;
    printf("The area of the rectangle is: %f",area);
    getch();
}