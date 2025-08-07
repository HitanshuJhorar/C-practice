// 2. Convert Lowercase String to Uppercase
// Input: "hello"
// Output: "HELLO"
// Hint: Use toupper() or ASCII logic
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>

int main(){
    char str[]="hello";
    int n=strlen(str);
    for(int i=0;i<n;i++){
        char ch=toupper(str[i]);
        str[i]=ch;
    }
    printf("%s",str);
    return 0;
}