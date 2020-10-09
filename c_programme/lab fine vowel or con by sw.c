
#include<stdio.h>
int main()
{
    printf("\t\tInput any Alphabet to check this Alphabet whether is Vowel or Consonant\n\n");
    char ch;
    printf("\tInput any Alphabet to check : ");
    scanf("%c", &ch);

    switch(ch)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        printf("\n\t\t%c is Vowel.\n", ch);

        break;

    default:
        printf("\n\t\t%c is Consonant.\n", ch);
    }

    return 0;


}
