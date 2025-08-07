//  Question 1: Reverse an Array (in-place)
// 🔹 Input: [1, 2, 3, 4, 5]
// 🔹 Output: [5, 4, 3, 2, 1]
// 💡 Swap elements from start and end, move towards center.
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
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]);

    }
    for(int i=0;i<n/2;i++){
        int temp =ptr[i];
            ptr[i]=ptr[n-i-1];
            ptr[n-i-1]=temp;
    }
    printf("Array after reversing:\n");
    for(int i=0;i<n;i++){
        printf("%d\n",ptr[i]);
    }

    free(ptr);
    return 0;
}