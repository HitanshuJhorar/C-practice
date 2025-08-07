//  3. Replace Positive Numbers with 1 and Negative with 0
// 🧠 Task: Replace all positive numbers in array with 1 and all negative with 0.
// 📥 Input: [-3 4 -1 6]
// 📤 Output: [0 1 0 1]
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
    for(int i=0;i<n;i++){
        if(ptr[i]>0){
            ptr[i]=1;
        }
        else if(ptr[i]<0){
            ptr[i]=0;
        }
        
    }
    printf("AFTER CHANGING  occurnces :\n");
    for(int i=0;i<n;i++){
        printf("%d\n",ptr[i]);
    }
    free(ptr);
    return 0;
}