#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("the total no of arguments are:  %d\n", argc);
    printf("arguments are : ");
    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    return 0;
}
