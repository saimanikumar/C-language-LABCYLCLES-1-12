#include <stdio.h>
int read(int a[10], int n)
{
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    return a[10];
}
void write(int a[10], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}
void main()
{
    int i, n, pos, ele, sum = 0, a[10], choice, flag = 0;
    int posi = 0, neg = 0, odd = 0, even = 0;
    int t, pos1, pos2;
    printf("Enter the size:");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    read(a, n);
    printf("Given array is:\n");
    write(a, n);
    do
    {
        printf("\nEnter your choice:\n1.Insert at a position\n2.Delete an element\n3.Sum of all elements\n4.count of positive,negative,odd and even Nos.\n5.Search for an element\n6.Interchange two position values\n7.Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the position and element to insert:");
            scanf("%d %d", &pos, &ele);
            for (i = n; i >= pos; i--)
                a[i] = a[i - 1];
            a[pos] = ele;
            n += 1;
            printf("The array after Insertion is:\n");
            write(a, n);
            break;
        case 2:
            printf("Enter the position to delete:");
            scanf("%d", &pos);
            for (i = pos; i < n; i++)
                a[i - 1] = a[i];
            n -= 1;
            printf("The array after deletion:\n");
            write(a, n);
            break;
        case 3:
            for (i = 0; i < n; i++)
                sum += a[i];
            printf("Sum of elements is %d", sum);
            break;
        case 4:
            for (i = 0; i < n; i++)
            {
                if (a[i] > 0)
                    posi++;
                else
                    neg++;
                if (a[i] % 2 == 0)
                    even++;
                else
                    odd++;
            }
            printf("No of positive Nos. are %d.\n", posi);
            printf("No of negative Nos. are %d.\n", neg);
            printf("No of even Nos. are %d.\n", even);
            printf("No of odd Nos. are %d.\n", odd);
            break;
        case 5:
            printf("Enter the element to search:");
            scanf("%d", &ele);
            for (i = 0; i < n; i++)
            {
                if (ele == a[i])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
                printf("Data is found");
            else
                printf("Data not found");
            break;
        case 6:
            printf("Array before swapping:\n");
            write(a, n);
            printf("Enter the positions to swap:");
            scanf("%d %d", &pos1, &pos2);
            t = a[pos1];
            a[pos1] = a[pos2];
            a[pos2] = t;
            printf("Array after swapping:\n");
            write(a, n);
            break;
        }
    } while (choice < 7);
}
