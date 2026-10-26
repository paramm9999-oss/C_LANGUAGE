#include <stdio.h>
struct Complex
{
int real;
int imag;
};
struct Complex add(struct Complex a, struct Complex b)
{
struct Complex c;
c.real = a.real + b.real;
c.imag = a.imag + b.imag;
return c;
}
int main()
{
struct Complex n1, n2, sum;
printf("Enter real and imaginary parts of first number: ");
scanf("%d %d", &n1.real, &n1.imag);
printf("Enter real and imaginary parts of second number: ");
scanf("%d %d", &n2.real, &n2.imag);
sum = add(n1, n2);
printf("Sum = %d + %di\n", sum.real, sum.imag);
return 0;
}