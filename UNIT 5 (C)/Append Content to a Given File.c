#include <stdio.h>
int main()
{
FILE *fp;
char text[100];
fp = fopen("data.txt", "a");
if (fp == NULL)
{
printf("Cannot open file\n");
return 1;
}
printf("Enter text to append: ");
fgets(text, sizeof(text), stdin);
fputs(text, fp);
fclose(fp);
printf("Content appended successfully\n");
return 0;
}