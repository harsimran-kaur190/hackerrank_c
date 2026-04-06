#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int size=2*n-1;

    for (int i=0;i< size;i++) {
        for (int j=0;j<size;j++) {

            if (i<=j && i<=(size-1-j)) {
                printf("%d ",n-i);
            }

            else if (i>=j && i>=(size-1-j)) {
                printf("%d ",n-(size-1-i));
            }
           
            else if (j<=i && j<=(size-1-i)) {
                printf("%d ",n-j);
            }
        
            else {
                printf("%d ",n-(size-1-j));
            }
        }
        printf("\n");
    }
    return 0;
}