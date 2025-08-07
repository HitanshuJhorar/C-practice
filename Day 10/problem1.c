// 1. Reverse an Integer
// Input: 12345
// Output: 54321
// Hint: Use % and / in a loop.
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>

int main(){
    int n=12345;
    int p=0;
    int ori=n;
    while(n>0){
        int digit=n%10;
        p=p*10+digit;
        n=n/10;
    }
    printf("The revrese of %d is %d\n",ori,p);
    return 0;
}
