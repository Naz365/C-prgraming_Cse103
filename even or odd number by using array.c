#include<stdio.h>
int main()
{
    int i,number;
    printf("Enter number of array : ");

    scanf("%d",&number);

    int num[100];
    printf("Enter numbers to separate even and odd : ");

    for(i=0; i<number; i++)
    {
        scanf("%d",&num[i]);
    }
    printf("Even numbers are : ");

    for(i=0; i<number; i++)
    {
        if(num[i]>=0)
        {
            if(num[i]%2==0)
            {
                printf("%d , ",num[i]);
            }

        }
    }
    printf("\n");
    printf("Odd numbers are : ");
    for(i=0; i<number; i++)
    {
        if(num[i]>=0)
        {
            if(num[i]%2==1)
            {
                printf("%d , ",num[i]);
            }

        }
    }
    return 0 ;
}
