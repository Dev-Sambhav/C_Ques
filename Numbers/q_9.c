// Write a program to check if a number is binary.

#include <stdio.h>
#include <stdlib.h>

// Solve
void solve(int num)
{
    int i, digit;
    int n = num;
    while (n > 0)
    {
        digit = n % 10;
        if (digit != 0 && digit != 1)
        {
            printf("\nNot a Binary Number");
            exit(1);
        }
        n = n / 10;
    }
    printf("\nBinary Number.");
}

int main()
{
    int num;
    printf("\nEnter a Number:- ");
    scanf("%d", &num);
    solve(num);
    return 0;
}