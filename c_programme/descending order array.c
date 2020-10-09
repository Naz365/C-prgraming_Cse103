#include <stdio.h>
int main ()

{
    int num[100],n,i=0,temp,j;
    printf("How many number you want : ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    for (i=0; i<n; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(num[j]<num[j+1])
            {
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }

    }

    printf("Descending order array : ");

    for (i=0; i<n; i++)
    {
        printf("%d , ",num[i]);
    }
    return 0 ;


}


