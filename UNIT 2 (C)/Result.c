#include <stdio.h>

int main()
{
    int roll, m1, m2, m3, m4, m5, total;
    float percentage;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    printf("Roll Number = %d\n", roll);
    printf("Total = %d\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    if (m1 < 33 || m2 < 33 || m3 < 33 || m4 < 33 || m5 < 33)
    {
        printf("Result = Fail\n");
        printf("Grade = F");
    }
    else
    {
        printf("Result = Pass\n");

        if (percentage >= 90)
            printf("Grade = A+");
        else if (percentage >= 80)
            printf("Grade = A");
        else if (percentage >= 70)
            printf("Grade = B");
        else if (percentage >= 60)
            printf("Grade = C");
        else if (percentage >= 50)
            printf("Grade = D");
        else
            printf("Grade = E");
    }

    return 0;
}