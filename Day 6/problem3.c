// Question 3: Check Palindrome Number
// 🔹 Input: 121
// 🔹 Output: Yes
// 🔹 Input: 123
// 🔹 Output: No
// 💡 Hint: Compare reversed number with original.
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>

int main(){
    int n=121;
    int p=0;
    int orignal=n;
    while(n>0){
        int digit=n%10;
        p=p*10+digit;
        n=n/10;
    }
    if(p==orignal){
        printf("Yes, It is a palidrome\n");
    }
    else{
        printf("No, It is not a palidrome\n");
    }
    return 0;
}