#include <stdio.h>
#include <stdlib.h>
int main()
{
      int i, n,*data;
      printf("How many elements you want to add : ");
      scanf("%d", &n);
      // Allocates memory for 'n' elements.
      data = (int*) calloc(n, sizeof(int));
      if(data == NULL)
      {
            printf("Error!!! Memory is Not Allocated.");
            exit(0);
      }
      printf("\n");
      // Stores the numbers entered by the user.
      for(i = 0; i < n; ++i)
      {
            printf("Enter Number %d: ", i + 1);
            scanf("%d", data + i);
      }
      // Loop to store largest number at address data
      for(i = 1; i < n; ++i)
      {
            if(*data < *(data + i))
                  *data = *(data + i);
      }
      printf("\nLargest Element = %d", *data);
      return 0;
}
