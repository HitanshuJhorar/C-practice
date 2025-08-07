// Print this Pattern (n = 4)
// 1  
// 1 2  
// 1 2 3  
// 1 2 3 4  
// Hint: Nested loop: outer for rows, inner for printing j.
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>

int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=1;j<i+2;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
