// Write a program to find sum of digit of number using recursion
#include <stdio.h>

// Solve Function
int solve(int num)
{
    if (num == 0)
    {
        return 0;
    }
    return solve(num / 10) + num % 10;
}
int main()
{
    int num,sum;
    printf("Enter a Number:- ");
    scanf("%d", &num);
    sum = solve(num);
    printf("\nSum of digit is %d",sum);
    return 0;
}