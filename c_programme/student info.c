#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float sub1,sub2,sub3,sum,marks;
} s[10];

main()
{
    int i;

    printf("Total number of student :\n");
    int n;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        float sum=0,grade=0;

        s[i].roll = i + 1;
        printf("\nFor roll number : %d,\n", s[i].roll);
        printf("Enter first name : ");
        scanf("%s", s[i].name);

        printf("sub 1 marks : ");
        scanf("%f",&s[i].sub1);

        if(s[i].sub1 < 33 )
            printf("fail in this subjects : ");
        else if(s[i].sub1 > 33 && s[i].sub1 < 40 )
            printf(" Grade d ");
        else if(s[i].sub1 >40 && s[i].sub1 <50)
            printf("Grade C ");
        else if(s[i].sub1 > 50 && s[i].sub1< 65)
            printf(" Grade B");
        else if(s[i].sub1 >65 && s[i].sub1 <79)
            printf("Grade A ");
        if(s[i].sub1 >79  && s[i].sub1 <100)
            printf("Grade A+ ");

        printf("\nsub 2 marks : ");
        scanf("%f",&s[i].sub2);
        if(s[i].sub2 < 33 )
            printf("fail in this subjects : ");
        else if(s[i].sub2 > 33 && s[i].sub2 < 40 )
            printf(" Grade d ");
        else if(s[i].sub2 >40 && s[i].sub2 <50)
            printf("Grade C ");
        else if(s[i].sub2 > 50 && s[i].sub2 < 65)
            printf(" Grade B");
        else if(s[i].sub2 >65 && s[i].sub2 <79)
            printf("Grade A ");
        if(s[i].sub2 >79  && s[i].sub2 <100)
            printf("Grade A+ ");

        printf("\n sub 3 marks : ");
        scanf("%f",&s[i].sub3);
        if(s[i].sub3 < 33 )
            printf("fail in this subjects :");
        else if(s[i].sub3 > 33 && s[i].sub3 < 40 )
            printf(" Grade d ");
        else if(s[i].sub3 >40 && s[i].sub3 <50)
            printf("Grade C ");
        else if(s[i].sub3 > 50 && s[i].sub3 < 65)
            printf(" Grade B");
        else if(s[i].sub3 >65 && s[i].sub3 <79)
            printf("Grade A ");
        if(s[i].sub3 >79  && s[i].sub3 <100)
            printf("Grade A+ ");

        sum+=s[i].sub1+s[i].sub2+s[i].sub3;
        printf("\n total marks : %f ",sum);

        printf("\n");
    }

}
