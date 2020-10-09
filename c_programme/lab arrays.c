#include<stdio.h>
#include<math.h>
int main ()
{
    int a[50],i,max,n;
    printf("Enter the size of arrrays : ");
    scanf("%d",&n);

    printf("Enter the the value of arrays : ");

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[1]);
    }

    max=a[0];
    for(i=0; i<n; i++)
    {

        if(a[i]>max)

        {

            max=a[i];

        }

    }

}
