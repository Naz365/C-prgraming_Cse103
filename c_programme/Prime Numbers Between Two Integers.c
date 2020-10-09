#include <stdio.h>
int checkPrimeNumber(int n);
int main()
{
    int n1, n2, i, flag;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    printf("Prime numbers between %d and %d are: ", n1, n2);
    for (i = n1 + 1; i < n2; ++i)
    {


        flag = checkPrimeNumber(i);

        if (flag == 1)
            printf("%d ", i);
    }
    return 0;
}


int checkPrimeNumber(int n)
{
    int l, flag = 1;
    for (l = 2; l <= n / 2; ++l)
    {
        if (n % l == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
