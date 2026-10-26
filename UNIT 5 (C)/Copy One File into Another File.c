#include <stdio.h>
int main()
{
FILE *source, *target;
int ch;
source = fopen("data.txt", "r");
if (source == NULL)
{
printf("Source file not found\n");
return 1;
}
target = fopen("copy.txt", "w");
if (target == NULL)
{
printf("Cannot create target file\n");
fclose(source);
return 1;
}
while ((ch = fgetc(source)) != EOF)
{
fputc(ch, target);
}

fclose(source);
fclose(target);
printf("File copied successfully\n");
return 0;
}