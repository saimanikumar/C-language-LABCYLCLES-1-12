#include <stdio.h>
void main()
{
    int n, i, sum = 0, x;
    float avg;
    printf("Enter number of different subjects ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        sum += x;
    }
    avg = sum / n;
    if (avg <= 100 && avg >= 90)
        printf("GRADE is O");
    else if (avg <= 89 && avg >= 80)
        printf("GRADE is E");
    else if (avg <= 79 && avg >= 70)
        printf("GRADE is A");
    else if (avg <= 69 && avg >= 60)
        printf("GRADE is B");
    else if (avg <= 59 && avg >= 50)
        printf("GRADE is C");
    else
        printf("GRADE is F ");
}
