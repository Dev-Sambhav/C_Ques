// Write a program to delete vowels in a given string.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Solve Function
void solve(char *string)
{
    int len,i,j;
    len = strlen(string);
    for(i=0;i<len;i++){
        if(tolower(string[i]) == 'a' || tolower(string[i]) == 'e' || tolower(string[i]) == 'i' || tolower(string[i]) == 'o' || tolower(string[i]) == 'u'){
            for(j=i;j<len;j++){
                string[j] = string[j+1];
            }
            len--;
            i--;
        }
    }
    printf("\nString :- %s",string);
}
int main()
{
    char string[30];
    printf("\nEnter a String:- ");
    scanf("%[^\n]",string);
    solve(string);
    return 0;
}