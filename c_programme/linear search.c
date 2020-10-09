#include <stdio.h>
int main()
{
    int arr[50],i,value,size,flag=0;
    printf("Enter the size of array : ");
    scanf("%d",&size);
//take input from user
    printf("Drop your Input here : ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Element of array are : ");

    for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);

    }
     // main part of linear search
     for (i=0;i<size;i++)
     {
     if(arr[i]==value)
     {
     printf("Searching data found at : %d",i+1);
     flag==1;
     break;
     }

     }

     if(flag==0)
     {
     printf("\nImproper Input");
     }

}
