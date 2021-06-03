#include<stdio.h>
#include<stdlib.h>
char *substring(char *str,int pos,int len)
{
    char *substr;
    substr = malloc(len);
   
   if (substr == NULL)
   {
      printf("Unable to allocate memory.\n");
      return 0;
   }
   int c;
    for (c = 0; c < len; c++)
   {
      *(substr+c) = *(str+pos-1);      
      str++;  
   }
 
   *(substr+c) = '\0';
    return substr;
}
void main()
{
    char str[100],*substr;
    int pos,len;
    printf("Enter the string:   ");
    gets(str);
    printf("Enter the position   ");
    scanf("%d",&pos);
    printf("enter the length    ");
    scanf("%d",&len);
    substr=substring(str,pos,len);
    printf("The substring is \"%s\"",substr);
}
