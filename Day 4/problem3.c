// Question 3: Print All Prime Numbers up to N
// // 🔹 Input: 20
// // 🔹 Output: 2 3 5 7 11 13 17 19
// // 💡 Loop from 2 to N, and check for prime using nested loop or function.
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>
int isprime(int n){
    if(n<2){
        return 0;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    printf("Enter n:\n");
    scanf("%d",&n);
    
    
    for(int i=1;i<n;i++){
        if(isprime(i)){
            printf("%d\n",i);
        }
    }

    
    return 0;
}