#include <stdio.h>
int main()
{
   int n, z;

   printf("Input two integers (n & z) to swap\n");
   scanf("%d%d", &n, &z);

   n = n + z;
   z = n - z;
   n = n - z;

   printf("a = %d\nb = %d\n",n,z);
   return 0;
}
