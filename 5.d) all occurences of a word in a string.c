#include <stdio.h>
#include <string.h>
void main()
{
    char str[100] = {0}, word[100], substr[100][100] = {0};
    printf("Enter the sentence:  ");
    gets(str);
    printf("Enter the word  ");
    gets(word);
    int i = 0, j = 0, k = 0,count=0;
    char c;
    while (str[k] != '\0') //for splitting sentence into words
    {
        j = 0;
        while (str[k] != ' ' && str[k] != '\0' && str[k] != '.')
        {
            substr[i][j] = str[k];
            k++;
            j++;
        }
        substr[i][j] = '\0';
        if (str[k] != '\0')
        {
            k++;
        }
        if (strcmp(substr[i], word) == 0)
        {
            count++;
        }
        i++;
    }
        printf("Number of occurrences of the word %s is %d", word, count);
}
