//  Question 2: Count Digits of a Number
// 🔹 Input: 4567
// 🔹 Output: 4
// 💡 Divide the number by 10 repeatedly, count steps.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main()
{
    int n = 4567;
    int count = 0;
    int orignal= n;
    if(n==0){
        count=1;
    }
    else{
        while(n>0){
            n=n/10;
            count++;
        }
    }
    printf("The digit in %d is %d",orignal,count);
}