#include <stdio.h>
#include <math.h>
int main()
{
    int year;
    printf("Enter Year : ");
    scanf("%d",&year);
    if(year%400==0)
    {
        printf("This is a leap year");
    }
    else if (year%4==0 && year%100!=0)
    {
        printf("This is a leap year");
    }
    else
    {
        printf("This is not a leap year");
    }


}
