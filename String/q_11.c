// Write a program to count Occurrence of vowels and consonants in a string.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Solve Function
void solve(char *string)
{
    int len, i, c = 0, v = 0;
    len = strlen(string);
    for (i = 0; i < len; i++)
    {
        if (string[i] == ' ')
        {
            continue;
        }
        else
        {
            if (tolower(string[i]) == 'a' || tolower(string[i]) == 'e' || tolower(string[i]) == 'i' || tolower(string[i]) == 'o' || tolower(string[i]) == 'u')
            {
                v++;
            }
            else
            {
                c++;
            }
        }
    }
    printf("\nTotal occurrence of Vowel is %d", v);
    printf("\nTotal occurrence of Consonant is %d", c);
}
int main()
{
    char string[30];
    printf("\nEnter a String:- ");
    scanf("%[^\n]",string);
    solve(string);
    return 0;
}