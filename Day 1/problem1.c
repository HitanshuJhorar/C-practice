// 1. Check if Array is Palindrome
// Write a program to check if the array reads the same forward and backward.
// Input: [1 2 3 2 1] → Output: Yes, it's a palindrome

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
    int count=1;
    for(int i=0;i<n/2;i++){
        if(ptr[i]!=ptr[n-i-1]){
            count=0;
            break;
        }
    }
    if(count){
        printf("Yes it is a palidrome");
    }
    else{
        printf("No, it is not a pallidrome");
    }

    return 0;
}