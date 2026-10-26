#include <stdio.h>
int main()
{
FILE *fp;
char text[100];
int ch;
fp = fopen("data.txt", "w");
printf("Enter some text: ");
fgets(text, sizeof(text), stdin);
fputs(text, fp);
fclose(fp);
fp = fopen("data.txt", "r");
printf("\nFile Content:\n");
while ((ch = fgetc(fp)) != EOF)
{

putchar(ch);
}
fclose(fp);
return 0;
}