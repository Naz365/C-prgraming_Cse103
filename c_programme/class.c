#include <stdio.h>

int main()
{
    int num1,num2,sum,multiply,divide,subtract;

    printf("Enter two number :");
    scanf("%d %d",&num1,&num2);
    sum=num1+num2;
    multiply=num1*num2;
    divide=num1/num2;
    subtract=num1-num2;
    printf("sum=%d\n",sum);
    printf("multiply=%d\n",multiply);
    printf("divide=%d\n",divide);
    printf("subtrac=%d\n",subtract);
    return 0;

}
