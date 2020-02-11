#include<stdio.h>
int main()
{
    int weekday;
    printf ("Enter the value if weekday 1 to 7 : ");
    scanf("%d",&weekday);
    if(weekday==1)
    {
        printf("This is Saturday\n");
    }
    else if (weekday==2)
    {
      printf("This is Sunday\n");
    }
    else if (weekday==3)
    {
        printf("This is Monday\n");
    }
    else if (weekday==4)
    {
       printf("This is Tuesday\n");
    }
    else if (weekday==5)
    {
        printf("This is Wednesday\n");
    }
    else if (weekday==6)
    {
        printf("This is Thusday\n");
    }
    else if (weekday==7)
    {
        printf("This is Friday and Holiday\n");
    }
    else
    {
        printf("This is incorrect");
    }
}
