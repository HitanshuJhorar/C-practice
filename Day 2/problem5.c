// 5. Find All Pairs with Given Sum
// 🧠 Task: Find all pairs in array whose sum is equal to K.
// 📥 Input: [1 5 7 -1], K = 6
// 📤 Output: (1, 5) and (7, -1)
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>

int main(){
    int n;
    printf("Enter n:\n");
    scanf("%d",&n);
    int*ptr=(int*)malloc(n* sizeof(int));
    int*sumpre=(int*)malloc(n* sizeof(int));
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    int k;
    printf("Enter the value of k:\n");
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(ptr[i]+ptr[j]==k){
                printf("(%d,%d) ",ptr[i],ptr[j]);
            }
        }
    }
    free(ptr);
    return 0;
}
