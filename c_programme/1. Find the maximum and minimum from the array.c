#include <stdio.h>
main()
{
    int cas,n=10,i,j,k,counter=0;
    int min,max=0;

    int ar[100];


    printf("Enter  ten array  element :\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);

    }

    printf("\n\n");

    printf("1.Find maximum and minimum in the array \n\n");
    printf("2.Display Sum of all odd value in the array \n\n");
    printf("3.Display all the prime number in the array \n\n");

    //case 1
    min =ar[i];
    for(i=0; i<n; i++)
    {
        if(ar[i] > max)
        {
            max=ar[i];

        }
        if(ar[i] < min)
        {
            min=ar[i];
        }

    }

    //end case 1;


    //case 2
    int sum=0;
    for(i=0; i<n; i++)
    {
        if(ar[i] % 2!=0)
        {
            sum+=ar[i];
        }

    }
    //end case 2

    scanf("%d",&cas);

    switch(cas)
    {
    case 1:

        printf("Maximum value in array %d \n\n",max);
        printf("Minimum value in array %d\n\n",min);

        break;
    case 2:
        printf("Sum of all odd number in array  %d \n\n",sum);
        break;
    case 3:
        for(i=0; i<n; i++)
        {
            counter=0;

            for(j=2; j<ar[i]; j++)

            {

                if(ar[i]%j==0)

                {
                    counter=1;
                    break;

                }

            }

            if(counter==0)

            {

                printf("\t %d",ar[i]);

            }

        }

        printf("\n\n");
        break;

    default :
        printf("Error !");

    }




}



