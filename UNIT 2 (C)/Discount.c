#include <stdio.h>

int main()
{
    float price, quantity, total, discount, payment;

    printf("Enter price: ");
    scanf("%f", &price);

    printf("Enter quantity: ");
    scanf("%f", &quantity);

    total = price * quantity;

    if (total > 1000)
        discount = total * 15 / 100;
    else
        discount = total * 10 / 100;

    payment = total - discount;

    printf("Total Purchase = %.2f\n", total);
    printf("Discount = %.2f\n", discount);
    printf("Final Payment = %.2f", payment);

    return 0;
}