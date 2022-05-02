// Write a program to calculate factorial using iterative method.

#include <stdio.h>

// Solve
void solve(int num)
{
   int i,fact=1;
   for(i=1;i<=num;i++){
       fact= fact * i;
   }
   printf("Factorial of %d is %d",num,fact);
}

int main()
{
    int num;
    printf("\nEnter a Number:- ");
    scanf("%d", &num);
    solve(num);
    return 0;
}