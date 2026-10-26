#include <stdio.h>
struct Student
{

int roll;
float marks;
};
union Data
{
int roll;
float marks;
};
int main()
{
struct Student s;
union Data u;
s.roll = 1;
s.marks = 85.5;
printf("Structure:\n");
printf("Roll = %d\n", s.roll);
printf("Marks = %.1f\n", s.marks);
u.roll = 1;
printf("\nUnion:\n");
printf("Roll = %d\n", u.roll);
u.marks = 85.5;
printf("Marks = %.1f\n", u.marks);
return 0;
}