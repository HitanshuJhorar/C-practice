// Question 2: Count Frequency of an Element
// // 🔹 Input: Array = [1, 2, 3, 2, 2, 5], Target = 2
// // 🔹 Output: Frequency of 2 is 3
// // 💡 Run loop and count how many times target appears
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
    int count=0;
    int target;
    printf("Enter the element you want frequency of:\n");
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        if(ptr[i]==target){
            count++;
        }
    }
    printf("The frequency of %d is %d",target,count);
    free(ptr);
    return 0;
}