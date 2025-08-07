// 5. Find Maximum Difference
// Find the maximum difference between any two elements such that the larger element appears after the smaller.
// Input: [2 3 10 6 4 8 1] → Output: 8 (10 - 2)
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>

int main(){
    int n;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int ptr[n];
    printf("Enter the element of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    int min=ptr[0];
    int max_diff=ptr[1]-ptr[0];
    for(int i=1;i<n;i++){
        if(ptr[i]-min>max_diff){
            max_diff=ptr[i]-min;
        }
        
        if(ptr[i]<min){
            min=ptr[i];
        }
    }
    printf("The max difference is: %d\n", max_diff);
    free(ptr);
   
    return 0;
}
