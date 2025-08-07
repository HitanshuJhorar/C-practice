// 2. Count Vowels and Consonants in a String
// Input: "Hitanshu"
// Output:Vowels: 3
// Consonants: 5
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main()
{
    char name[] = "Hitanshu";
    int n = strlen(name);
    int vowels = 0;
    int consonants = 0;
    for (int i = 0; i < n; i++)
    {
        char ch = tolower(name[i]);
        if (isalpha(ch))
        {
            if (ch == 'a' || ch == 'i' || ch == 'e' || ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }
    printf("Vowels:%d\nConsonants:%d\n", vowels, consonants);
    return 0;
}