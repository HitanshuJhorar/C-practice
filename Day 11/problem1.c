// 1. Check Palindrome String
// Input: "madam"
// Output: "Palindrome"
// Hint: Compare characters from both ends.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main()
{
    char name[] = "madam";
    int n = strlen(name);
    int count = 1;
    for (int i = 0; i < n / 2; i++)
    {
        if (name[i] != name[n - i - 1])
        {
            count = 0;
            break;
        }
    }
    if (count != 0)
    {
        printf("YES, it is a palidrome\n");
    }
    else
    {
        printf("NO,it is not a palidrome\n");
    }
    return 0;
}