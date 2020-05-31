#include<stdio.h>
void main()
{
char c1[30];
int i=0;
printf("Please enter your full name : ");
gets(c1);

while(c1[i]!='\0')
{
printf("%c\n",c1[i]);
i++;
}




}
