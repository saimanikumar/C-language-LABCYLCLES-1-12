#include <stdio.h>
int main()
{
    char ch, fname[30];
    FILE *fp;
    printf("Enter the filename with extension: ");
    gets(fname);
    fp = fopen(fname, "r");
    if (fp == NULL)
    {
        printf("unable to open the file");
        return (0);
    }
    ch = fgetc(fp);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fp);
    }
    fclose(fp);
}
