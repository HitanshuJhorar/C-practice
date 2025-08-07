// 2. Check Armstrong Number(3 - digit)
//     Input : 153 Output : Armstrong Number
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>
int arm(int n,int p){
    if(n==0){
        return 0;
    }
    
    
    
    int digit=n%10;
   
    return (digit*digit*digit)+arm(n/10,p);
}
int main(){
    int n=153;
    int p=0;
    int ori=n;
    int count=arm(n,p);
    if(count==ori){
        printf("ARMSTRONG NUMBER");
    }
    else{
        printf("NO");
    }
    return 0;
}