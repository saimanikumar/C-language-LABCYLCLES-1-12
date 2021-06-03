#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *str, arr[26] = {0};
    int i;

    str = (char *)malloc(100 * (sizeof(char)));
    if (str == NULL)
    {
        printf("memory is not allocated");
        return 0;
    }
    printf("Enter the string:   ");
    gets(str);
    strlwr(str);
    int k;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' || str[i] <= 'z')
        {
            k = (int)str[i];
            (arr[k - 97])++;
        }
    }
    int flag = 0;
    for (i = 0; i < 26; i++)
    {
        if (arr[i] >= 1)
            flag = 1;
        else
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        printf("The given string in Pangram");
    }
    else
    {
        printf("The given string is Not Pangram");
    }
    free(str);
    return 0;
}
