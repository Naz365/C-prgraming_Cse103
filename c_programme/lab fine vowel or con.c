#include<stdio.h>
int main()


{
    char ch;
    printf("Enter any alphabet: ");
    scanf("%c",&ch);
    if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
    {
        printf("%c is vowel",ch);
    }
    else
    {
        printf("%c is consonant",ch);
    }





    return 0;


}
