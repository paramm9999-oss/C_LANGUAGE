#include <stdio.h>

void area(float *r, float *area)
{
    *area = 3.14159 * (*r) * (*r);
}

int main()
{
    float radius, result;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    area(&radius, &result);

    printf("Area of circle = %.2f", result);

    return 0;
}