// 4. Print Fibonacci Series up to n Terms
// Input: n = 7
// Output: 0 1 1 2 3 5 8
// Hint: Loop + store previous 2 values.
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>

int main(){
    int n=7;
    int ptr[n];
    for(int i=0;i<n;i++){
        if(i==0){
            ptr[i]=i;
        }
        else if(i==1){
            ptr[i]=i;
        }
        else{
            ptr[i]=ptr[i-1]+ptr[i-2];
        }
    }
    for(int i=0;i<n;i++){
        printf("%d\n",ptr[i]);
    }
    return 0;
}