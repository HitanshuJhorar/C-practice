// 3. Print All Prime Numbers in a Given Range
//     Input : 1 to 50 Output : 2 3 5 7 11 13 ...(Hint : Use nested loops)
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>

int main(){
    int n=50;
    for(int i=2;i<=n;i++){
        int isprime=1;
        for(int j=2;j<=sqrt(i);j++){
            if(i%j==0){
                isprime=0;
                break;

            }
        }
        if(isprime){
            printf("%d ",i);
        }
    }
    return 0;
}