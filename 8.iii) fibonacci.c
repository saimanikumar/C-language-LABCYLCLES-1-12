#include <stdio.h>
int fibonacci(int);
void main()
{
    int n, f, n1, n2, i;
    int choice;

    printf("Enter the value:");
    scanf("%d", &n);
    printf("Fibonacci series of %d are:\n", n);
    for (i = 0; i < n; i++)
        printf("%d ", fibonacci(i));
}
int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
}
