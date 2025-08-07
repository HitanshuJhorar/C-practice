// Question 5: Print Pyramid Pattern
// 🔹 Input: rows = 5
// 🔹 Output:
//     *
//    ***
//   *****
//  *******
// *********
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>

int main(){
    int n=5;
    int m=1;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=(2*i-1);j++){
            printf("*");
            
            
        }
        printf("\n");
        
    }

    return 0;
}