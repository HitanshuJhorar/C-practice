// Question 4: Count Even and Odd Digits
// 🔹 Input: 45671
// 🔹 Output: Even: 2, Odd: 3
// 💡 Hint: % 2 == 0 for even.
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>

int main(){
    int n=45671;
    int p=0;
    int original=n;
    int even=0;
    int odd=0;
    while(n>0){
        int digit=n%10;
        if(digit%2==0){
            even++;

        }
        else{
            odd++;
        }
        n=n/10;
    }
    printf("Even: %d,Odd: %d\n",even,odd);
    return 0;
}