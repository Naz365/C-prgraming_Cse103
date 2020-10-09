
#include <stdio.h>
int main()
{
    int arr[25],i,num,size,pos;
    printf("Enter the size of array : ");
    scanf("%d",&size);
//take input from user
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Element of array are : \n");

    for(i=0; i<size; i++)
    {
        printf("%d \n",arr[i]);

    }

//main part of deletion
    printf("\nEnter the position : ");
    scanf("%d" ,&pos);
    if(pos<=0 || pos>size)
    {
    printf("Invaled Input");
    }
    for(i=pos-1; i<size-1; i++)
    {
        arr[i]=arr[i+1];
    }

    size--;
    printf("\nThe resultant array is : \n");
    for(i=0; i<size; i++)
    {
        printf("%d\n",arr[i]);
    }



}

