#include <stdio.h>
int main()
{
      int  num, binary_val, decimal_val = 0, base = 1, rem;
      printf("Insert a binary num (1s and 0s) \n");
      scanf("$d", &num); 
      binary_val = num;
      while (num > 0)
      {
          rem = num % 10;
          decimal_val = decimal_val + rem * base;
          num = num / 2 ;
          base = base * 10;
      }
      printf("%d \n", binary_val);
      printf("%d \n", decimal_val);
   return 0;
}
//If the user enters 1001, then the output will be 9