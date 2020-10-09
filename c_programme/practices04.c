#include <stdio.h>
int main()
{
int num1,num2;
printf("Please Enter the value : ");
scanf("%d %d",&num1,&num2);
if(num1==num2)
{
printf("This two number are equal");
}

else if (num1!=num2)
{
printf("This two number aren't equal");
}

else
{
printf("Incorrect");
}

}
