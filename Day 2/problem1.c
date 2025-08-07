//  1. Merge Two Arrays
// 🧠 Task: Merge two arrays using DMA and print the final merged array.
// 📥 Input: [1 2 3], [4 5 6]
// 📤 Output: [1 2 3 4 5 6]
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>

int main(){
    int n1;
    printf("Enter n1:\n");
    scanf("%d",&n1);
    int n2;
    printf("Enter n2:\n");
    scanf("%d",&n2);
    int*ptr1=(int*)malloc(n1* sizeof(int));
    int*ptr2=(int*)malloc(n2* sizeof(int));
    int*ptr3=(int*)malloc((n1+n2)* sizeof(int));
    printf("Enter the element of n1:\n");
    for(int i=0;i<n1;i++){
        scanf("%d",&ptr1[i]);

    }
    for(int i=0;i<n2;i++){
        scanf("%d",&ptr2[i]);
    }
    for(int i=0;i<n1;i++){
        ptr3[i]=ptr1[i];
    }
    for(int i=0;i<n2;i++){
        ptr3[n1+i]=ptr2[i];
    }
    printf("The array after merging:\n");
    for(int i=0;i<n1+n2;i++){
        printf("%d\n",ptr3[i]);
    }
    return 0;
}