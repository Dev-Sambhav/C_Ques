// Write a program to calculate sum of integers in string.
#include <stdio.h>
#include <string.h>

// Solve Function
void solve(char *string)
{
    int sum=0,len,i;
    len = strlen(string);
    for(i=0;i<len;i++){
        if(string[i]>=48 && string[i] <= 57){
            sum += string[i] - 48;
        }
        else{
            printf("\n%c is not a digit!",string[i]);
            return;
        }
    }
    printf("Answer:- %d",sum);
}
int main()
{
    char string[30];
    printf("\nEnter a String:- ");
    scanf("%[^\n]",string);
    solve(string);
    return 0;
}