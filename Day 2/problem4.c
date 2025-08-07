// 4. Calculate Prefix Sum Array
// 🧠 Task: Create a new array where each element is the sum of all previous elements including current one.
// 📥 Input: [1 2 3 4]
// 📤 Output: [1 3 6 10]
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>
void sump(int*ptr,int*arr,int final){
    int i=0;
    int sum=0;
    while(i<final){
        sum+=ptr[i];
        arr[i]=sum;
        i++;

    }
}
int main(){
    int n;
    printf("Enter n:\n");
    scanf("%d",&n);
    int*ptr=(int*)malloc(n* sizeof(int));
    int*sumpre=(int*)malloc(n* sizeof(int));
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    } 
    // doing sum of all previeous element amd storing in new dma
    sump(ptr,sumpre,n);
    printf("The value after adding:\n");
    for(int i=0;i<n;i++){
        printf("%d",sumpre[i]);
    }
    return 0;
}