#include<stdio.h>
#include<conio.h>
void main()
{
    int p,r,t,SimpleInterest;
    printf("Enter principal amount: ");
    scanf("%d",&p);
    printf("Enter rate of interest: ");
    scanf("%d",&r);
    printf("Enter time in years: ");
    scanf("%d",&t);
    
    SimpleInterest=(p*r*t)/100;
    printf("Simple Interest is: %d",SimpleInterest);
    getch();
}