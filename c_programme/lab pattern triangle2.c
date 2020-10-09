#include <stdio.h>
int main()
{
    int number=1,row,col;
    printf("Enter the number : ");
    scanf("%d",&number);
    for (row=1; row<=number; row++)
    {
        for(col=1; col<=number-row; col++)

        {
            printf(" ");
        }
        for(col=1; col<=row; col++)
        {
            printf("*");
        }

        printf("\n");


    }


return 0;

}
