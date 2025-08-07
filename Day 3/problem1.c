// 1. Count Zeros and Ones in Binary Array
// 🔹 Input: [1, 0, 1, 1, 0, 0, 1]
// 🔹 Output: Zeros = 3, Ones = 4
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>

int main(){
    int n;
    printf("Enter n:\n");
    scanf("%d",&n);
    int*bina=(int*)malloc(n* sizeof(int));
    printf("Enter the n elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&bina[i]);
    }
    int zero=0;
    int one=0;
    for(int i=0;i<n;i++){
        if(bina[i]==0){
            zero++;
        }
        if(bina[i]==1){
            one++;
        }
    }
    printf("The no. of zeros present is :%d\n",zero);
    printf("The no. of ones present are :%d\n",one);
    free(bina);
    return 0;
}