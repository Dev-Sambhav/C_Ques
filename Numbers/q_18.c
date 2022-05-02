// Write a program to calculate factorial using recursion.

#include <stdio.h>

// Solve
int fact = 1,i = 1;
int solve(int num)
{
    if(num>0){
        fact = fact * i;
        i++;
        solve(num-1);
    }
    return fact;
}

int main()
{
    int num;
    printf("\nEnter a Number:- ");
    scanf("%d", &num);
    int ans = solve(num);
    printf("Factorial of %d is %d",num,ans);
    return 0;
}