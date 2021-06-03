#include <stdio.h>
#include <string.h>

void replaceSubstring(char[], char[], char[]);

void main()
{
    char string[100], sub[100], new_str[100];
    printf("\nEnter a string: ");
    gets(string);
    printf("\nEnter the substring: ");
    gets(sub);
    printf("\nEnter the new substring: ");
    gets(new_str);
    replaceSubstring(string, sub, new_str);
}

void replaceSubstring(char string[], char sub[], char new_str[])
{
    int stringLen, subLen, newLen;
    int i = 0, j, k;
    int flag = 0, start, end;
    stringLen = strlen(string);
    subLen = strlen(sub);
    newLen = strlen(new_str);

    for (i = 0; i < stringLen; i++)
    {
        k = 0;
        for (j = i; j < i + subLen; j++)
        {
            if (string[j] == sub[k])
                k++;
            else
                break;
        }
        if (k == subLen)
        {
            start = i;
            end = j;
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("SUBSTRING WAS NOT FOUND!!!");
    }
    else
    {
        for (j = start; j < end; j++)
        {
            for (k = start; k < stringLen; k++)
                string[k] = string[k + 1];
            stringLen--;
            i--;
        }

        for (j = start; j < start + newLen; j++)
        {
            for (k = stringLen; k >= j; k--)
                string[k + 1] = string[k];
            string[j] = new_str[j - start];
            stringLen++;
            i++;
        }
        printf("\nThe string after replacing : %s\n", string);
    }
}
