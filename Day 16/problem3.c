/*

Print Diamond Pattern (n = 5)
output:
    *
   ***
  *****
   ***
    *

*/

#include <stdio.h>

int main() {
    int n = 5;
    int m = (n % 2 == 0) ? n / 2 : (n / 2) + 1;
    int o = n / 2;

    // Upper half
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= m - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2*i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for (int i = o; i >= 1; i--) {
        for (int j = 1; j <= m - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2*i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
