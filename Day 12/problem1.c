// 1. Reverse a String
// Input: "hello"
// Output: "olleh"
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>

int main(){
    char str[]="hello";
    int n=strlen(str);
    
    for(int i=0;i<n/2;i++){
        char temp=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=temp;
    }
    printf("%s",str);
    return 0;
}