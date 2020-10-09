#include<stdio.h>
int main()
{
    int i,j,Raw,Col;
    int A[10][10],B[10][10],C[10][10];
    printf("Enter the number of rows and columns : ");
    scanf("%d %d",&Raw,&Col);

    printf("Enter the clements for A matix : ");
    for(i=0; i<Raw; i++)
    {
        for(j=0; j<Col; j++)
        {
            printf("A[%d][%d] = ",i,j);


            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("Enter the elements for B matix : ");
    for(i=0; i<Raw; i++)
    {
        for(j=0; j<Col; j++)
        {
            printf("B[%d][%d] = ",i,j);


            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }

    printf("A =  ");
    for(i=0; i<Raw; i++)
    {
        printf("\t");
        for(j=0; j<Col; j++)
        {
            printf("%d  ",A[i][j]);
        }
        printf("\n");
    }


    printf("\n");
    printf("B = ");
    for(i=0; i<Raw; i++)
    {
        printf("\t");
        for(j=0; j<Col; j++)
        {
            printf("%d  ",B[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<Raw; i++)
    {
        for(j=0; j<Col; j++)
        {
            C[i][j]=A[i][j]+ B[i][j];
        }

    }
    printf("Sum:A + B = ");
    for(i=0; i<Raw; i++)
    {

        for(j=0; j<Col; j++)
        {
            printf("%d  ",C[i][j]);
        }
        printf("\n");
        printf("\t\ ");



    }
}
