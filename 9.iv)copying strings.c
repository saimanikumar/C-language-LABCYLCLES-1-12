#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *s1, *s2;
    s1 = (char *)malloc(50 * sizeof(char));
    if (s1 == NULL)
    {
        printf("Unable to allocate memory");
        return 0;
    }
    s2 = (char *)malloc(50 * sizeof(char));
    if (s2 == NULL)
    {
        printf("Unable to allocate memory");
        return 0;
    }
    printf("enter the string1:   ");
    gets(s1);
    int i;
    for (i = 0; *(s1 + i) != '\0'; i++)
    {
        *(s2 + i) = *(s1 + i);
    }
    *(s2 + i) = '\0';
    printf("the second string which was copied is : %s", s2);
}
