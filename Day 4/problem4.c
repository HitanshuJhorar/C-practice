// Question 4: Check if a Number is Perfect Number
// // 🔹 Input: 28
// // 🔹 Output: Yes (1 + 2 + 4 + 7 + 14 = 28)
// // 💡 Sum all proper divisors and compare with original number.
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>
int pernum(int n){
    if(n<1){
        return 0;
    }
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(n!=sum){
        return 0;
    }
    return 1;
}
int main(){
    int n;
    printf("Enter n:\n");
    scanf("%d",&n);
    if(pernum(n)){
        printf("Yes, it is a perfect number\n");
    }
    else{
        printf("No, it is not a perfect numebr\n");
    }
    return 0;
}