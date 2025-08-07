// Question 1: Find the Largest Element in an Array
// // 🔹 Input: [5, 2, 9, 1, 7]
// // 🔹 Output: 9
// // 💡 Use a loop to compare and track the max value.
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
    printf("Enter the n elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]);

    }
    int max= ptr[0];
    for(int i=0;i<n;i++){
        if(ptr[i]>max){
            max=ptr[i];
        }
    }
    printf("The largest element of the array is %d",max);
    free(ptr);
    return 0;
}