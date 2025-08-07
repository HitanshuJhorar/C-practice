// 3. Find Second Largest in Array
// Input: {5, 9, 2, 1, 7}
// Output: 7
// Hint: Maintain first and second max while looping.
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>

int main(){
    int arr[]={5, 9, 2, 1, 7};
    int max=arr[0];
    int secmax=arr[0];
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>secmax&&max>arr[i]){
            secmax=arr[i];
        }
    }
    printf("The secnd largest element of array is %d",secmax);
    return 0;
}