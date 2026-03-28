 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int max_and = 0, max_or = 0, max_xor = 0;

  for (int a = 1; a < n; a++) {
      for (int b = a + 1; b <= n; b++) {
          
          // Bitwise AND
          int res_and = a & b;
          if (res_and < k && res_and > max_and) {
              max_and = res_and;
          }

          // Bitwise OR
          int res_or = a | b;
          if (res_or < k && res_or > max_or) {
              max_or = res_or;
          }

          // Bitwise XOR
          int res_xor = a ^ b;
          if (res_xor < k && res_xor > max_xor) {
              max_xor = res_xor;
          }
      }
  }

  printf("%d\n%d\n%d\n", max_and, max_or, max_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}