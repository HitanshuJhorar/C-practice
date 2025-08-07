// Question 3: Armstrong Number Check
// 🔹 Input: 153
// 🔹 Output: Yes (because 1³ + 5³ + 3³ = 153)
// 💡 Extract digits, cube them, and compare with original number.
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>

int main(){
    int n=153;
    int orignal=n;
    int count=0;
    while(n>0){
        int digit=n%10;
        count+=digit*digit*digit;
        n=n/10;
    }
    if(orignal==count){
        printf("Yes it is a armstrong number\n");
    }
    else{
        printf("No it is not armstrong number\n");
    }
    return 0;
}