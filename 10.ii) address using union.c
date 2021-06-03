#include <stdio.h>
union info
{
    char name[20], home_address[50], hostel_address[50], city[20], state[20], zip[10];
};

void main()
{
    union info s;
    printf("Enter NAME: ");
    gets(s.name);
    printf("NAME                        :   %s\n", s.name);
    printf("Enter CITY: ");
    gets(s.city);
    printf("CITY                        :   %s\n", s.city);
    printf("Enter STATE: ");
    gets(s.state);
    printf("STATE                       :   %s\n", s.state);
    printf("Enter ZIP: ");
    gets(s.zip);
    printf("ZIP                         :   %s\n", s.zip);
    int n;
    printf("Enter HOSTEL ADDRESS : ");
    gets(s.hostel_address);
    printf("HOSTEL ADDRESS              :  %s\n", s.hostel_address);
    printf("Enter HOME ADDRESS : ");
    gets(s.home_address);
    printf("HOME ADDRESS                : %s\n", s.home_address);
}
