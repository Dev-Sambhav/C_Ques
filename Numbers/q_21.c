// Write a program to print prime numbers in a given range.

#include <stdio.h>

// Solve
void solve(int n1,int n2)
{
    int i, j;
    // first i make a loop which start from n1 to n2 value
    for (i = n1; i <= n2; i++)
    {
        // now check each n2ber whether it is prime or not
        int isPrime = 1;
        for (j = 2; j < i; j++)
        {
            // if any number in between 2 to i is divided by 2 then it is not a prime number
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        // if isPrime value equal to 1 then just show to user
        if (isPrime)
        {

            printf("%d ", i);
        }
    }
}

int main()
{
    int n1,n2;
    printf("\nEnter a first value of range:- ");
    scanf("%d", &n1);
    printf("\nEnter a second value of range:- ");
    scanf("%d", &n2);
    solve(n1,n2);
    return 0;
}