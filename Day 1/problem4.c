// 4. Cyclically Rotate by One
// Rotate the array to the right by one position.
// Input: [1 2 3 4 5] → Output: [5 1 2 3 4]
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
    int j=ptr[n-1];
    
    for(int i=n-1;i>0;i--){
        ptr[i]=ptr[i-1];
    }
    ptr[0]=j;
    printf("The array after roating:\n");
    for(int i=0;i<n;i++){
        printf("%d\n",ptr[i]);
    }
    free(ptr);
    return 0;
}