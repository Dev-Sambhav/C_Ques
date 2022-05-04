// Write a program to remove blank spaces from string.
#include <stdio.h>
#include <string.h>

// Solve Function
void solve(char *string)
{
    int i,j,len;
    len = strlen(string);
    for(i=0;i<len;i++){
        if(string[i] == ' '){
            for(j=i;j<len;j++){
                string[j] = string[j+1];
            }
            len--;
            i--;
        }
    }
    printf("\nNew String is %s",string);
}
int main()
{
    char string[30];
    printf("\nEnter a String:- ");
    scanf("%[^\n]",string);
    solve(string);
    return 0;
}