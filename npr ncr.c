#include <stdio.h>
double fact(double);
double find_npr(double, double);
double find_ncr(double, double);

int main()
{
    
    double n, r;
    double ncr, npr;

    printf("Enter the value of n and r\n");
    scanf("%lf%lf", &n, &r);
    if (n < r)
    {
        printf("n should be greater than or equal to r");
        return 0;
    }
    ncr = find_ncr(n, r);
    npr = find_npr(n, r);

    printf("the combination %.lfC%.lf = %.lf\n", n, r, ncr);
    printf("the permutation %.lfP%.lf = %.lf\n", n, r, npr);

    return 0;
}

double find_ncr(double n, double r)
{
    double result;

    result =(double) fact(n) / (double) (fact(r) * fact(n - r));

    return result;
}

double find_npr(double n, double r)
{
    double  result;

    result = (long)fact(n) / (long)fact(n - r);

    return result;
}

double fact(double n)
{
    double c;
    double result = 1;

    for (c = 1; c <= n; c++)
        result = result * c;

    return result;
}
