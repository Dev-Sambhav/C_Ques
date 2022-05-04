// Write a program to print highest frequency character in a string.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Solve Function
void solve(char *string)
{
    int i,j;
    char maxRepeatChar;
    int maxCount = 0,len;
    len = strlen(string);
    for(i=0;i<len;i++){
        int count = 0;
        for(j=0;j<len;j++){
            if(tolower(string[i]) == tolower(string[j])){
                count++;
            }
        }
        if(maxCount<count){
            maxCount = count;
            maxRepeatChar = string[i];
        }
    }
    printf("\nThe highest frequency character is %c in %s is %d times",maxRepeatChar, string, maxCount);
}
int main()
{
    char string[30];
    printf("\nEnter a String:- ");
    scanf("%[^\n]",string);
    solve(string);
    return 0;
}