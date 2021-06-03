#include<stdio.h>
void prime(int x)
{
    int i,y=0;
    for(i=1;i<x;i++)
    {
        if(x%i==0)
        {
            y++;
        }
    }
    if(y==1)
    {
        printf("%d\t",x);
    }
}
void fibonacciSeries(int n)
{
   int a=0, b=1, c;
   for(int i=0; i<n; i++)
   {
     prime(a);
     c = a+b;
     
     a = b;
     b = c;
   }
}

int main()
{
   int term;

   printf("Enter the term: ");//no fibonacci prime numbers do you need
   scanf("%d", &term);

   printf("The prime fibonacci series is: \n");

   fibonacciSeries(term);

   return 0;
}
