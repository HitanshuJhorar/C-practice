// Question 5: Hollow Rectangle Pattern
// // 🔹 Input: rows = 4, columns = 5
// // 🔹 Output:
// *****
// *   *
// *   *
// *****
// // 💡 Use nested loop with condition:
// // If i==1 || i==rows || j==1 || j==columns → print *, else print space.
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>

int main(){
    int n,m;
    printf("Enter the rows and column:\n");
    scanf("%d %d",&n,&m);
    for(int i=n;i>0;i--){
        
            for(int j=m;j>0;j--){
              
                
                if(j==m||j==1||i==1||i==n){
                    printf("*");
                }
                else{
                    printf(" ");
                }
                
                
            }
            printf("\n");
        
    }
    return 0;
}