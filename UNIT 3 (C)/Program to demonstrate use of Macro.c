#include <stdio.h>

#define PI 3.14
#define SQUARE(x) ((x) * (x))

int main()
{
    float r;

    printf("Enter radius: ");
    scanf("%f", &r);

    printf("Area of Circle = %.2f\n", PI * SQUARE(r));
    printf("Square of Radius = %.2f", SQUARE(r));

    return 0;
}