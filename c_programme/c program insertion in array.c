#include<stdio.h>
int main ()
{
    int info[10],i,n,position,element;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("Enter %d elements \n" , n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&info[i]);
    }

    printf("Input your position and element : ");
    scanf("%d %d",&position,&element);
    for (i=n-1;i>=position-1; i--)
    {
        info[i+1]=info[i];
    }

    info[position-1]=element;
    n++;
    for(i=0; i<n; i++)
    {
        printf("%d",info[i]);
    }

    return 0;
}
