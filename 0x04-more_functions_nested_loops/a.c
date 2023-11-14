#include <stdio.h>

int main() {
    unsigned long long int n = 612852475143;
    unsigned long long int x; 
    unsigned long long int a;

      for(a = 1; a <= 18446744073709551615; a++)
      {
          unsigned long long int x = (n / a);
          if (x <= 0)
          {
              putchar('\n');
          }
          else
          {
          printf("%lld  ", x);
          }
      }
     
    // }
    return 0;
}
