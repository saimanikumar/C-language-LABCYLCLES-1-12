#include <stdio.h>
#include <malloc.h>
int main()
{
    char *s1;
    int i, j = 0;
    s1 = (char *)malloc(50 * sizeof(char));
    if (s1 == NULL)
    {
        printf("Unable to allocate memory");
        return 0;
    }
    printf("enter the string1:   ");
    gets(s1);
    for (i = 0; *(s1 + i) != '\0'; i++)
        ;
    printf("length of the string is %d", i);
}
