// 4. Count Vowels and Consonants in a String
//     Input : "Hitanshu" Output : Vowels = 3,
//                                 Consonants = 5
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include<string.h>

int main(){
    
    char name[]="Hitanshu Jhorar";
    int n=strlen(name);
    int vowel=0;
    int consonent=0;
    for(int i=0;i<n;i++){
        char ch =tolower(name[i]);
        if(isalpha(ch)){
            if(ch=='i'||ch=='a'||ch=='e'||ch=='o'||ch=='u'){
                vowel++;
            }
            else{
                consonent++;
            }
        }
    }
    printf("VOWEL: %d, CONSONANTS: %d\n",vowel,consonent);
    return 0;
}