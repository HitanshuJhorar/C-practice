// Question 1: Reverse a Number
// 🔹 Input: 1234
// 🔹 Output: 4321
// 💡 Hint: Use modulus and division.
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>

int main(){
    int n=1234;
    int p=0;
    int orignal=n;
    while(n>0){
        int digit=n%10;
        p=p*10+digit;
        n=n/10;
    }
    printf("The reverse of %d is %d\n", orignal, p);

    return 0;
}

