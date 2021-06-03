#include <stdio.h>
#include<stdlib.h>
int main()
{
    char *s1, *s2;
    int s1len = 0, s2len = 0;
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
    printf("enter the string2:   ");
    gets(s2);
    for (s1len = 0; *(s1 + s1len) != '\0'; s1len++)
        ;
    for (s2len = 0; *(s2 + s2len) != '\0'; s2len++)
        ;
    int flag = 1, i;
    if (s1len = s2len)
    {
        for (i = 0; *(s1 + i) != '\0'; i++)
        {
            if (*(s1 + i) == *(s2 + i))
            {
                flag == 1;
            }
            else
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            printf("Both the strings are same");
        }
        else
        {
            printf("Both the strings are not equal");
        }
    }
    else
    {
        printf("Both the strings are not equal");
    }
}
