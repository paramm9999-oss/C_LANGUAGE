#include <stdio.h>
int main()
{
FILE *fp;
int ch;
int characters = 0, spaces = 0;
int tabs = 0, lines = 0;
fp = fopen("data.txt", "r");
if (fp == NULL)
{
printf("File not found\n");
return 1;
}
while ((ch = fgetc(fp)) != EOF)
{
characters++;
if (ch == ' ')
spaces++;
if (ch == '\t')
tabs++;
if (ch == '\n')
lines++;

}
fclose(fp);
printf("Characters: %d\n", characters);
printf("Blank spaces: %d\n", spaces);
printf("Tabs: %d\n", tabs);
printf("Lines: %d\n", lines);
return 0;
}