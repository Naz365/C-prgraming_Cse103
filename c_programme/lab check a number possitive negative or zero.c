#include<stdio.h>
#include<math.h>
int main ()
{
int number;
printf("Enter a number : ");
scanf("%d",&number);
if (number>0)
{
printf("%d is a possitive number",number);
}
else if (number<0)
{
printf ("%d is a negative number",number);
}

else
{
printf("%d then the number is Zero",number);
}


 return 0;
 }
