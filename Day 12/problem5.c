//  5. Print This Pattern (n = 4)
//  1
//  2 3
//  4 5 6
//  7 8 9 10
// 🧠 Hint: Use a counter variable that keeps increasing in each inner loop.
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>

int main(){
    int n=4;
    int count=1;
    for(int i=1;i<=n;i++){
        
        for(int j=0;j<i;j++){
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
    return 0;
}