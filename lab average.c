#include<stdio.h>
int main()
{

// declare variables
int sub1,sub2,sub3,sub4,sub5,total;
float avg;

// Take inputs
printf("Enter the marks of all sub:");
scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);

// Calculate results
avg=(float)(sub1+sub2+sub3+sub4+sub5)/5;

// Show output
total=sub1+sub2+sub3+sub4+sub5;

printf("Totel number of all subject %d \n",total);
printf("The average of all subject is:%f \n",sub1,sub2,sub3,sub4,sub5,avg);


return 0;

}
