//  2. Count Frequency of Each Character in a String
// Input: "apple"
// a: 1  
// p: 2  
// l: 1  
// e: 1
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>

int main(){
    char str[]="apple";
    int n=strlen(str);
    int freq[256] = {0};
    for(int i = 0; i < n; i++) {
        freq[(int)str[i]]++;
    }
    for(int i = 0; i < n; i++) {
        if(freq[(int)str[i]] != 0) {
            printf("%c: %d\n", str[i], freq[(int)str[i]]);
            freq[(int)str[i]] = 0; // To avoid re-printing
        }
    }
    
    
    return 0;
}