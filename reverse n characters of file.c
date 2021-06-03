#include <stdio.h>
int main()
{
    FILE *fp;
    char ch, fname[30], newch[500];
    int i = 0, j, COUNT = 0,n;
    printf("Enter the filename with extension: ");
    gets(fname);
    printf("Enter number of characters that should be reversed: ");
    scanf("%d",&n);
    fp = fopen(fname, "r+");
    if (fp == NULL)
    {
        printf("Unable to open the file");
        return 0;
    }
    printf("\nThe original content is:\n\n");
    ch = fgetc(fp);
    while (COUNT!=n)
    {
        COUNT++;
        putchar(ch);
        newch[i] = ch;
        i++;
        ch = fgetc(fp);
    }
    printf("\n\n\n");
    printf("The content in reverse order of first n characters is:\n\n");
    rewind(fp);
    for (j = n-1; j >= 0; j--)
    {
        ch = newch[j];
        fputc(ch, fp);
        printf("%c", ch);
    }
    printf("\n\nFIRST \"%d\" CHARACTERS OF THE FILE IS REVERSED SUCCESSFULLY\n ",n);
    fclose(fp);
    return 0;
}
