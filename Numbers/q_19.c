// Write a program to check a given number is even or odd.

#include <stdio.h>

// Solve
void solve(int num)
{
    if(num % 2 == 0){
        printf("Even Number");
    }else{
        printf("Odd Number");
    }
}

int main()
{
    int num;
    printf("\nEnter a Number:- ");
    scanf("%d", &num);
    solve(num);
    return 0;
}