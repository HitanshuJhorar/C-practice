// 2. Rotate Array by K Positions (Right Rotation)
// 🔹 Input: [1, 2, 3, 4, 5], k = 2
// 🔹 Output: [4, 5, 1, 2, 3]
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>
void reverse(int*ptr,int start, int end){
    while(start<end){
        int temp=ptr[start];
        ptr[start]=ptr[end];
        ptr[end]=temp;
        start++;
        end--;
    }
}
int main(){
    int n;
    printf("Enter n:\n");
    scanf("%d",&n);
    int*arr=(int*)malloc(n* sizeof(int));
    printf("Enter the n elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    printf("Enter the value of k:\n");
    scanf("%d",&k);
    reverse(arr,n-k,n-1);
    reverse(arr,0,n-k-1);
    reverse(arr,0,n-1);
    printf("The array after reversing:\n");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    free(arr);
    return 0;
}