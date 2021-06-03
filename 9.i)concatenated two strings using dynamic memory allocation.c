#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *s1, *s2;
    int i, j = 0;
    s1 = (char *)malloc(50 * sizeof(char));
    if (s1 == NULL)
    {
        printf("Unable to allocate memory");
        return 0;
    }
    s2 = (char *)malloc(25 * sizeof(char));
    if (s2 == NULL)
    {
        printf("Unable to allocate memory");
        return 0;
    
    printf("enter the string1:   ");
    gets(s1);
    printf("enter the string2:   ");
    gets(s2);
    for (i = 0; *(s1 + i) != '\0'; i++)
        ;
    for (; *(s2 + j) != '\0'; i++, j++)
    {
        *(s1 + i) = *(s2 + j);
    }
    *(s1 + i) = '\0';
    printf("The concatenated string is %s", s1);
}
