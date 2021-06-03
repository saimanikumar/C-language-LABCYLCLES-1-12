#include <stdio.h>
#include <string.h>
void string(char str[], int pos, int l)
{
    int i = 0, n = strlen(str);

    for (int j = 0; j < l; j++)
    {
        for (i = pos - 1; i < n; i++)
        {
            str[i] = str[i + 1];
        }
        printf("%c ", str[i]);
        n--;
    }
    str[n] = '\0';
    printf("the string after deleting %s", str);
}
void main()
{
    char str[100];
    int pos, l;
    printf("enter string    ");
    gets(str);
    printf("enter the position  ");
    scanf("%d", &pos);
    printf("enter the number of characters ");
    scanf("%d", &l);
    string(str, pos, l);
}
