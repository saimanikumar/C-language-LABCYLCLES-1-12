#include <stdio.h>
void main()
{
    int m, d, h;
    printf("Enter Minutes!");
    scanf("%d", &m);
    h = m / 60;
    m = m % 60;
    d = h / 24;
    h = h % 24;
    printf("%d days %d hours %d minutes", d, h, m);
}
