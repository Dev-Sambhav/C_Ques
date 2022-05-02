// Write a program to find the average of numbers with explanations.

#include <stdio.h>

// Solve
void solve(int num)
{
    int i,c=0,digit;
    float avg,sum=0;
    int n1,n2;
    n1=n2=num;
    // count total digit in a given number
    while(n1>0){
        c++;
        n1 = n1/10;
    }
    // average logic
    while(n2>0){
        digit = n2%10;
        sum += digit;
        n2=n2/10;
    }
    avg = sum / c;
    printf("\nAverage of Number is %f",avg);
}

int main()
{
    int num;
    printf("\nEnter a Number:- ");
    scanf("%d", &num);
    solve(num);
    return 0;
}