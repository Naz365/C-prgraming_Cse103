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

//main part of insertion
    printf("\nEnter the Value & position : ");
    scanf("%d %d",&num,&pos);
    for(i=size-1; i>=pos-1; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=num;
    size++;
    printf("\nThe resultant array is : \n");
    for(i=0; i<size; i++)
    {
        printf("%d\n",arr[i]);
    }



}
