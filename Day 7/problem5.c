// 5. Find LCM of Two 
// Input: 12 18  
// Output: LCM = 36  
// (Hint: while loop or formula: LCM = (a*b)/GCD)
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>
int lcm(int a,int b){
    int max=(a>b)?a:b;
    while(1){
        if(max%a==0&&max%b==0){
            return max;
        }
        max++;
    }
}
int main(){
    int n=12,m=18;
    int lcma= lcm(12,18);
    printf("the lcm of %d and %d is %d",n,m,lcma);
    return 0;
}