// Write a program to check whether a number is palindrome or not using recursion.


#include <stdio.h>

// Solve
int rev = 0;
int solve(int num)
{
    int n = num;
    int remain;
    if (n > 0)
    {
        remain = n % 10;
        rev = rev * 10 + remain;
        solve(n / 10);
    }
    return rev;
}

int main()
{
    int num;
    printf("\nEnter a Number:- ");
    scanf("%d", &num);
    int reverse = solve(num);
    if (reverse == num)
    {
        printf("\nPalindrome number.");
    }
    else
    {
        printf("\nNot a Palindrome number.");
    }
    return 0;
}