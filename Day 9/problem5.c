// Find Frequency of Each Character in a String
// Input: "apple"
// Hint: Use array int freq[256] = {0} and loop.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main()
{
    char str[] = "apple";
    int freq[256] = {0};
    int n = strlen(str);
    // for (int i = 0; i < n; i++)
    // {
    //     if(freq[i]==1){
    //         continue;
    //     }
    //     int count=1;
    //     for (int j = i+1; j < n; j++){
    //         if(str[i]==str[j]){
    //             count++;
    //             freq[i]=1;
    //         }

    //     }
    //     printf("%c:%d\n",str[i],count);
    // }
    for(int i=0;i<n;i++){
        freq[(int)str[i]]++;
    }
    for(int i=0;i<n;i++){
        if(freq[(int)str[i]]!=0){
            printf("%c:%d\n",str[i],freq[(int)str[i]]);
            freq[(int)str[i]]=0;
        }
    }

    return 0;
}