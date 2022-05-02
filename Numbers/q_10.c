// Write a program to find sum of digits of a number using recursion.

#include <stdio.h>

// Solve
int rev = 0,sum=0;;
int solve(int num)
{
    int n = num;
    int remain;
    if(n>0){
        remain = n % 10;
        sum += remain;
        solve(n/10);
    }
    return sum;

}

int main()
{
    int num;
    printf("\nEnter a Number:- ");
    scanf("%d", &num);
    int result = solve(num);
    printf("\nSum of the number is %d",result);
    return 0;
}