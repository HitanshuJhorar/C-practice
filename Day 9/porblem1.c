// 1. Count Number of Digits in an Integer
// Input: 56234
// Output: 5
// Hint: Use loop with n /= 10
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>

int main(){
    int n=56234;
    int count=0;
    int orignal=n;
    while(n>0){
        int digit=n%10;
        count++;
        n=n/10;
    }
    printf("The number of digit in %d is %d",orignal,count);
    return 0;
}