// Write a program to replace first occurrence of vowel with '-' in string.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Solve Function
void solve(char *string)
{
    int len, i;
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
               string[i] = '-';
               break;
            }
        }
    }
    printf("\nAnswer:- %s", string);
}
int main()
{
    char string[30];
    printf("\nEnter a String:- ");
    scanf("%[^\n]",string);
    solve(string);
    return 0;
}