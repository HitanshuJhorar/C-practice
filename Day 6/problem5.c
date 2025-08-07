// question 5: Pattern – Right Angle Triangle
// 🔹 Input: rows = 5
// 🔹 Output:
//         *
//         * *
//         * * *
//         * * * *
//         * * * * *
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>

int main(){
    int n=5;
    for(int i=1;i<n+1;i++){
        
        for(int j=0;j<i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}