// 3. Sum of Even and Odd Numbers in Array
// Input: {1, 2, 3, 4, 5, 6}
// Output: Even Sum: 12, Odd Sum: 9
// Hint: Use if-else inside loop.
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>

int main(){
    int arr[]={1, 2, 3, 4, 5, 6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int even=0;
    int odd=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even+=arr[i];
        }
        else{
            odd+=arr[i];
        }
    }
    printf("Even Sum: %d, Odd Sum: %d\n",even,odd);
    return 0;
}