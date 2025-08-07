// 3. Find Maximum Element in an Array
// Input: {4, 9, 1, 7, 3}
// Output: 9
// // Hint: Loop and compare with max.
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>

int main(){
    int ptr[]= {4, 9, 1, 7, 3};
    int len=sizeof(ptr)/sizeof(ptr[0]);
    int max=ptr[0];
    for(int i=1;i<len;i++){
        if(ptr[i]>max){
            max=ptr[i];
        }
    }
    printf("The maximum element in array is %d\n",max);
    return 0;
}