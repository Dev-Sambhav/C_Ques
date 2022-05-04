// Write a program to count alphabets, digits and special characters.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Solve Function
void solve(char *string)
{
    int len, i, c = 0, v = 0,s=0;
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
            else if((string[i] >= 32 && string[i] <= 47) || (string[i] >= 58 && string[i] <= 64) || (string[i] >= 91 && string[i] <= 96) || (string[i] >= 123 && string[i] <= 126))
            {
                s++;
            }
            else{
                c++;
            }
        }
    }
    printf("\nTotal occurrence of Vowel is %d", v);
    printf("\nTotal occurrence of Consonant is %d", c);
    printf("\nTotal occurrence of Special Character is %d", s);
}
int main()
{
    char string[30];
    printf("\nEnter a String:- ");
    scanf("%[^\n]", &string);
    solve(string);
    return 0;
}