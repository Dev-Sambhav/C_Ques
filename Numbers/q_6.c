// Write a program to check whether a number is palindrome or not using iteration.

#include <stdio.h>

// Solve
void solve(int num)
{
    int n = num;
    int rev = 0, remain;
    while (n > 0)
    {
        remain = n % 10;
        rev = rev * 10 + remain;
        n = n / 10;
    }
    if(rev == num){
        printf("\nPalindrome number.");
    }else{
        printf("\nNot a Palindrome number.");
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