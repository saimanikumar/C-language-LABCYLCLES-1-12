#include<stdio.h>
int main()
{
    FILE *fp1,*fp2;
    char ch,f1name[30],f2name[30];
    printf("Enter the filename with extension: ");
    gets(f1name);
    fp1=fopen(f1name,"r");
    if (fp1 == NULL)
    {
        printf("unable to open the file");
        return (0);
    }
    printf("Enter the filename with extension: ");
    gets(f2name);
    fp2=fopen(f2name,"w");
    if (fp2 == NULL)
    {
        printf("unable to open the file");
        return (0);
    }
    ch=fgetc(fp1);
    while(ch!=EOF)
    {
        fputc(ch,fp2);
        ch=fgetc(fp1);
    }
    printf("\n\nCONTENT OF THE FILE IS COPIED SUCCESSFULLY\n ");
    fclose(fp1);
    fclose(fp2);
}
