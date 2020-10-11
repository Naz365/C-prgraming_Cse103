#include <stdio.h>
int main() {
    char s1[100] = "You need to learn ", s2[] = "more and more";
    int i, j;


    for (i = 0; s1[i] != '\0'; ++i) {
        printf("i = %d\n", i);
    }


    for (j = 0; s2[j] != '\0'; ++j, ++i) {
        s1[i] = s2[j];
    }

    s1[i] = '\0';

    printf("After Unification : ");
    puts(s1);

    return 0;
    }
