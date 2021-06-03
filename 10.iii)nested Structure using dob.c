#include <stdio.h>
struct details
{
    char name[50];
    struct dob
    {
        int date;
        int month;
        int year;
    } date_of_birth;

} s;

void main()
{
    printf("Enter the name:    ");
    gets(s.name);
    fflush(stdin);
    printf("enter the date month year(dd):  ");
    scanf("%d", &s.date_of_birth.date);
    printf("enter the date month year(mm):  ");
    scanf("%d", &s.date_of_birth.month);
    printf("enter the date month year(yyyy):  ");
    scanf("%d", &s.date_of_birth.year);
    printf("NAME            : %s\n", s.name);
    printf("DATE OF BIRTH   : %d-%d-%d", s.date_of_birth.date, s.date_of_birth.month, s.date_of_birth.year);
}
