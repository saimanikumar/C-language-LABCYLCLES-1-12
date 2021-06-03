#include <stdio.h>
#include <math.h>
void armstrong(int n1, int n2)
{
    int i, sum = 0, d, x, r;
    printf("\nArmstrong numbers between %d and %d are: ", n1, n2);
    for (i = n1; i <= n2; i++)
    {
        x = i;
        d = (int)log10(i) + 1;
        sum = 0;
        while (x > 0)
        {
            r = x % 10;
            sum += pow(r, d);
            x = x / 10;
        }
        if (sum == i)
            printf("%d ", sum);
    }
}
void prime(int n1, int n2)
{

    int i, j, flag;
    printf("\nPrime numbers between %d and %d are: ", n1, n2);
    for (i = n1; i <= n2; i++)
    {
        if (i == 1 || i == 0)
            continue;
        flag = 1;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
            printf("%d ", i);
    }
}
void strong(int n1, int n2)
{
    int j, i, c = 1, r, sum = 0;
    for (i = n1; i <= n2; i++)
    {
        int x = i;
        sum = 0;
        while (x > 0)
        {
            r = x % 10;
            c = 1;
            for (j = 1; j <= r; j++)
                c = c * j;
            x = x / 10;
            sum = sum + c;
        }
        if (sum == i)
            printf("%d\n", i);
    }
}

void main()
{
    int n1, n2, c;
    printf("Enter n1,n2:	");
    scanf("%d%d", &n1, &n2);
    printf("Enter '1' for prime//'2' for armstrong//'3' for strong:");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        prime(n1, n2);
        break;
    case 2:
        armstrong(n1, n2);
        break;
    case 3:
        strong(n1, n2);
        break;
    default:
        printf("Invalid Character");
    }
}
