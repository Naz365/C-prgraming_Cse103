#include<stdio.h>
#include<math.h>

int main()
{
    int num1,num2,num3;
    printf ("Enter the number : ");
    scanf("%d %d %d",&num1,&num2,&num3);

    if(num1>num2)
    {
        if (num1>num3)
        {
            printf("%d is the maximum number",num1);

        }
        else
        {
            printf("%d is the maximum number",num3);
        }
    }
    else
    {
        if (num2>num3)
        {
            printf("%d is the maximum number",num2);
        }
        else
        {
            printf("%d is the maximum number",num3);

        }
    }
    return 0;





}
