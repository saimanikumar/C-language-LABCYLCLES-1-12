#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("the total no of arguments are:  %d\n", argc);
    int x;
    x=atoi(argv[1]);//converts strings to integer
    printf("the number given by the user through command line argument is %d",x);
    printf("The sum of first %d integers is : ",x);
    int sum=0;
    for (int i = 1; i <= x; i++)
    {
        sum=sum+i;
    }
    printf("    %d",sum);
    return 0;
} 
