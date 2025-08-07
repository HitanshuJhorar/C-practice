// 4. Swap Two Numbers Without Third Variable
// Input: a = 5, b = 7
// Output: a = 7, b = 5
// Hint: Use + and - (or XOR for bonus).
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>

int main(){
    int n=5,m=7;
    n=n+m;
    m=n-m;
    n=n-m;
    printf("n=%d,m=%d",n,m);
    return 0;
}
