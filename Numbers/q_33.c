// Write a program to check the given year is a leap year or not.

#include <stdio.h>

// Solve
void solve(int y)
{
    if(y % 100 == 0){
        if(y % 400 == 0){
            printf("Leap Year.");
        }else{
            printf("Not a Leap Year.");
        }
    }else{
        if(y % 4 == 0){
            printf("Leap Year");
        }else{
            printf("Not a Leap Year");
        }
    }
}

int main()
{
    int y;
    printf("\nEnter a Year:- ");
    scanf("%d", &y);
    solve(y);
    return 0;
}