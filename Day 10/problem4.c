// . Check if a Number is Prime
// Input: 13
// Output: "Prime"
// Input: 12
// Output: "Not Prime"
// Hint: Divide from 2 to sqrt(n) and check.
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>

int main(){
    int n=12;
    int count=1;
    for(int i=2;i<=sqrt(n);i++){
        
        if(n%i==0){
            count=0;
            break;

        }
        
    }
    if(count!=0){
        printf("prime");
    }
    else{
        printf("Not prime");
    }
    return 0;
}