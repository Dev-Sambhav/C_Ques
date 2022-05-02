// Write a program to check given number is perfect or not.

#include <stdio.h>

// Solve
void solve(int num)
{
    int n = num;
    int i, sum = 0;
    for (i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (n == sum)
    {
        printf("\nPerfect Number.");
    }
    else
    {
        printf("\nNot a Perfect Number.");
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