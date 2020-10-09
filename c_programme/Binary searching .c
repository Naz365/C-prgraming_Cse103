#include<stdio.h>
int main()
{
    int a[30],num,i,data,left,right,mid;
    printf("Enter the size of the array : ");
    scanf("%d",&num);
    printf("Enter the elements in this array in ascending order  : ");
    for(i=0; i<num; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element you want to search in this array : ");
    scanf("%d",&data);
    left = 0 , right= num-1;

    while(left<=right)
    {
        mid=(left+right)/2;

        if(data==a[mid])
        {
            printf("%d searching element is found at index %d ",data,mid);
            break;
        }
        else if(data>a[mid])
        {
            left=mid+1;
        }
        else if(data<a[mid])
        {
            right=mid-1;
        }


    }
    if(left>right)
    {
        printf("Invalid input ");
    }
}
