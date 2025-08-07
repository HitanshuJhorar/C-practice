// 2. Count Digits in an Integer
// Input: 10532
// Output: 5
// Hint: Use a loop with n /= 10 and a counter.
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>

int main(){
    int n=10532;
    int p=0;
    int ori=n;
    for(int i=0;n>0;i++){
        p++;
        n=n/10;
    }
    printf("The number of digit in %d is %d \n",ori,p);
    return 0;
}