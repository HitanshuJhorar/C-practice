// Question 4: Find Largest Element in Array
// 🔹 Input: [3, 6, 1, 9, 2]
// 🔹 Output: 9
// 💡 Traverse array and track max element.
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
    int max=ptr[0];
    for(int i=1;i<n;i++){
        if(ptr[i]>max){
            max=ptr[i];
        }
    }
    printf("The largest element in array is %d\n",max);
    free(ptr);
    return 0;
}