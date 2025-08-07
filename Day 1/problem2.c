// 2. Second Smallest Element
// Find the second smallest element in an array.
// Input: [4 2 7 1 3] → Output: 2
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
    int min= ptr[0];
    int min2=ptr[0];
    for(int i=1;i<n;i++){
        if(ptr[i]<min){
            min=ptr[i];
        }
        
    }
    for(int i=1;i<n;i++){
        if(ptr[i]<min2 && ptr[i]>min){
            min2=ptr[i];
        }
    }
    printf("The second smallest element is %d",min2);
    
    return 0;
}