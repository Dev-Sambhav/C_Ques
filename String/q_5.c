// Write a program to check given character is vowel or consonant.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Solve Function
void solve(char ch)
{
    if(tolower(ch) == 'a' || tolower(ch) =='e' || tolower(ch) == 'i' || tolower(ch) == 'o' || tolower(ch) == 'u'){
        printf("\nVowel");
    }else{
        printf("\nConsonant");
    }
}
int main()
{
    char ch;
    printf("\nEnter a Character:- ");
    scanf("%c", &ch);
    solve(ch);
    return 0;
}