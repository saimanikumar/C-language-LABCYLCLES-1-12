#include <stdio.h>
#include <math.h>
void main()
{
    int x, n, i, sum = 1, y;
    printf(" Enter x, n Values");
    scanf("%d %d", &x, &n);
    if (n >= 0)
    {
        for (i = 0; i < n; i++)
        {
            y = x * (pow(x, i));
            sum = sum + y;
        }
        printf("%d", sum);
    }
    else
    {
        printf("ERROR");
    }
}
