// Write a program to calculate factorial using recursion.

#include <stdio.h>

// Solve
long int solve(int num)
{
    if(num>=1){
        return num*solve(num-1);
    }else{
        return 1;
    }
}

int main()
{
    int num;
    printf("\nEnter a Number:- ");
    scanf("%d", &num);
    printf("Factorial of %d is %ld",num,solve(num));
    return 0;
}