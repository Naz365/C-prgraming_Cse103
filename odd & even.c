#include<stdio.h>
int main()

{
    int number;

    scanf("%d",&number);
    int reminder=number%2;

    if (reminder==0)
    {
        printf ("this number is even");
    }
    else

    {
        printf("this value is odd");
    }
    return 0;
}
