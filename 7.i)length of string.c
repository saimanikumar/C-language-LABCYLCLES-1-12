#include<stdio.h>
int stringlen(char *str)
{
    int i;
    for(i=0;*(str+i)!='\0';i++);
    return i;
}
void main()
{
    char str[100];
    int l;
    printf("Enter the string:   ");
    gets(str);
    l=stringlen(str);
    printf("The length of the string is %d",l);
}
