// 4. Check if Array is Sorted (Ascending)
// 🔹 Input: [1, 2, 3, 5, 6] → Yes
// 🔹 Input: [1, 3, 2] → No
// 💡 Simple for loop with condition check.
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>

int main(){
    int n;
    printf("Enter n:\n");
    scanf("%d",&n);
    int*arr=(int*)malloc(n* sizeof(int));
    printf("Enter the n elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=1;
    // array sort check
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            count=0;
            break;
        }
    }
    if(count){
        printf("Yes the array is sorted in acsending order\n");
    }
    else{
        printf("No the array is not sorted\n");
    }
    free(arr);

    return 0;
}
