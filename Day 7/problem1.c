// 1. Sum of Digits(Recursion se karo)
//     Input : 1234 Output : 10 // 1+2+3+4
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>
int counter(int n,int sum){
    if(n==0){
        return sum;
    }
    
    int digit = n%10;
    sum+=digit;
    return counter(n/10,sum);

}
int main(){
    int n=1234;
    int count=counter(n,0);;
    
    printf("The sum of digits is %d\n",count);
    return 0;
}