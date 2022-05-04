// Write a program to remove repeated character from string.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Solve Function
void solve(char *string)
{
    int i,j,k,z,len;
    len = strlen(string);
    for(i=0;i<len;i++){
        for(j=i+1;j<len;j++){
            if(tolower(string[i]) == tolower(string[j])){
                for(k=j;k<len;k++){
                    string[k] = string[k+1];
                }
                len--;
                j--;
            }
        }
        // for(z=i;z<len;z++){
        //     string[z] = string[z+1];
        // }
        // len--;
        // i--;
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