// 3. Find Largest Element in Array
// Input: {3, 7, 2, 9, 4}
// Output: 9
// 🧠 Hint: Loop through and track max value.

#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>

int main(){
    int ptr[]={3, 7, 2, 9, 4};
    int n =sizeof(ptr)/sizeof(ptr[0]);
    int max=ptr[0];
    for(int i=1;i<n;i++){
        if(ptr[i]>max){
            max=ptr[i];
        }
    }
    printf("The largest element is %d\n",max);
    return 0;
}