// Write a program to check given number is prime or not.

#include <stdio.h>

// Solve
void solve(int num)
{
    int i, isPrime = 1;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0 || num == 1)
        {
            isPrime = 0;
            break;
        }
    }
    if (!isPrime)
    {
        printf("\nNot a Prime Number.");
    }
    else
    {
        printf("\nIt is a Prime Number.");
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