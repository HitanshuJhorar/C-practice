//  5. Find First Repeating Element
// 🔹 Input: [10, 5, 3, 4, 3, 5, 6]
// 🔹 Output: 5 (first element that repeats earliest)
// 💡 Use nested loop or hash idea with extra array.
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>

int main(){
    int n;
    printf("Enter n:\n");
    scanf("%d",&n);
    int*bina=(int*)malloc(n* sizeof(int));
    printf("Enter the n elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&bina[i]);
    }
    int count=-1;
    int freq=1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(bina[i]==bina[j]){
                count=bina[i];
                freq=0;
                break;
            }
        }
        if(freq==0){
            break;
        }

    }
    if(count!=-1){

        printf("The first repeating element is %d\n",count);
    }
    else{
        printf("No, repeating element found\n");
    }
    free(bina);
    return 0;
}