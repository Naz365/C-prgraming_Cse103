#include <stdio.h>
int main()
{
    int number,i=1,j=1;
    printf("Enter the value : ");
    scanf("%d",&number);
    for (i=1; i<=number; i++)

    {
        for (j=1; j<=i; j++)

        {
            printf("*");
        }
        printf("\n");

    }



    return 0;
}
