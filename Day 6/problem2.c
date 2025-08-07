// Question 2: Sum of Digits
// 🔹 Input: 678
// 🔹 Output: 6 + 7 + 8 = 21
// 💡 Hint: Extract digits and add them.
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>

int main(){
    int n=678;
    int p=0;
    int orignal=n;
    while(n>0){
        int digit = n%10;
        p+=digit;
        n=n/10;
    }
    printf("Sum of digits is %d\n",p);
    return 0;
}