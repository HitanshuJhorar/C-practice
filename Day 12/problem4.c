//  4. Check Armstrong Number
// Input: 153
// Output: Yes, Armstrong
// 🧠 Hint: 1³ + 5³ + 3³ = 153 (use pow and loop through digits)
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>

int main(){
    int n=153;
    int p=0;
    int ori=n;
    while(n>0){
        int digit=n%10;
        p=p+pow(digit,3);
        n=n/10;
    }
    if(p==ori){
        printf("Yes, It is armstrong\n");
    }
    else{
        printf("no,It is not armstrong\n");
    }
    return 0;
}