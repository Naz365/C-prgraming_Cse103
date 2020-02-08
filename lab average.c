#include<stdio.h>
int main()
{

// declare variables
int sub1,sub2,sub3,sub4,sub5;
float avg;

// Take inputs
printf("Enter the marks of all sub:");
scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);

// Calculate results
avg=(float)(sub1+sub2+sub3+sub4+sub5)/5;

// Show output
printf("The average of all subject %d %d %d %d %d is:%f",sub1,sub2,sub3,sub4,sub5,avg);




}
