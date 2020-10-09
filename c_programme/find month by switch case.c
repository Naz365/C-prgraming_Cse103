#include <stdio.h>

int main()
{
    int month;

    /* Input month number from user */
    printf("Enter month number(1-12): ");
    scanf("%d", &month);

    switch(month)
    {
        case 1:
            printf("The name of month is January ");
            break;
        case 2:
            printf("The name of month is February ");
            break;
        case 3:
            printf("The name of month is March ");
            break;
        case 4:
            printf("The name of month is April ");
            break;
        case 5:
            printf("The name of month is May ");
            break;
        case 6:
            printf("The name of month is June ");
            break;
        case 7:
            printf("The name of month is July ");
            break;
        case 8:
            printf("The name of month is August ");
            break;
        case 9:
            printf("The name of month is September");
            break;
        case 10:
            printf("The name of month is October ");
            break;
        case 11:
            printf("The name of month is November ");
            break;
        case 12:
            printf("The name of month is December 9");
            break;
        default:
            printf("Invalid input! Please enter month number between 1-12");

    }

    return 0;
}
