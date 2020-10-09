#include <stdio.h>
int main()
{
    int i,j;
    int arr[4][5];
    for(i=0; i<4; i++)
    {
        for(j=0; j<5; j++)
        {
        printf("arr[%d][%d] = ",i,j);
        scanf("%d",&arr[i][j]);


        }
        printf("\n");

    }
return 0;
}
