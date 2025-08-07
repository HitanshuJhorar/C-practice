// 5. Print Pattern (n = 4)
    
//     1
//     0 1
//     1 0 1
//     0 1 0 1
// Hint: Alternate 0 and 1 depending on i+j.

#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>

int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<i+1;j++){
            if((i+j)%2==0){
                printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}