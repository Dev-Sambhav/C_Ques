// Write a program to reverse an integer

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
    printf("\nReverse of %d is %d",num,rev);
}

int main()
{
    int num;
    printf("\nEnter a Number:- ");
    scanf("%d", &num);
    solve(num);
    return 0;
}