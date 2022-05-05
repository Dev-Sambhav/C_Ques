// Write a program to print all non repeating character in string.
#include <stdio.h>
#include <string.h>

// Solve Function
void solve(char *string)
{
    int i,len;
    int freq[256] = {0};
    len = strlen(string);
    for(i=0;i<len;i++){
        freq[string[i]]++;
    }
    for(i=0;i<256;i++){
        if(string[i] == 1){
            printf("\n%c",string[i]);
        }
    }
}
int main()
{
    char string[30];
    printf("\nEnter a String:- ");
    scanf("%[^\n]", string);
    solve(string);
    return 0;
}