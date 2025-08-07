//  3. Find All Duplicate Elements
// 🔹 Input: [1, 3, 4, 2, 3, 1, 5]
// 🔹 Output: 1 and 3 are duplicates
// 💡 Use nested loop and visited marking.
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
    int*visted=(int*)calloc(n, sizeof(int));
    printf("Enter the n elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(visted[i]==1){
            continue;
        }
        int isduplicate=0;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<n;k++){
                    arr[k]=arr[k+1];
                }
                visted[j]=1;
                isduplicate=1;
            }
            if(isduplicate){
                printf("%d",arr[i]);
            }
        }
    }
    free(visted);
    free(arr);
    return 0;
}