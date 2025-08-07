//  3. Frequency Count (Sorted Output)
// Count the frequency of all elements in an unsorted array and print in sorted order.
// Input: [2 3 2 4 4 4] →
// Output:
// 2 → 2 times
// 3 → 1 time
// 4 → 3 times
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>

int main(){
    int n;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int*ptr=(int*)malloc(n* sizeof(int));
    int*visited=(int*)calloc(n, sizeof(int));
    printf("Enter the element of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(ptr[i]>ptr[j]){
                int temp=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=temp;

            }
        }
    }
    for(int i=0;i<n;i++){
        if(visited[i]==1){
            continue;
        }
        int count=1;
        for(int j=i+1;j<n;j++){
            if(ptr[i]==ptr[j]){
                count++;
                visited[j]=1;
            }
            
        }
        printf("The frequency of %d is %d",ptr[i],count);
        
    }
    free(ptr);
    free(visited);
    return 0;
}