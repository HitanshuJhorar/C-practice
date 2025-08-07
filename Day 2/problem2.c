// 2. Remove Duplicates
// 🧠 Task: Remove duplicate elements from the array using DMA.
// 📥 Input: [1 2 2 3 4 4 5]
// 📤 Output: [1 2 3 4 5]
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
        for(int j=i+1;j<n;){
            if(ptr[i]==ptr[j]){
                for(int k=j;k<n-1;k++){
                    ptr[k]=ptr[k+1];
                }
                
                n--;
            }
            else{
                j++;
            }
        }
    }
    ptr=realloc(ptr,(n)* sizeof(int));
    printf("The array after removing duplicated array :\n");
    for(int i=0;i<n;i++){
        printf("%d\n",ptr[i]);
    }
    free(ptr);
    return 0;
}