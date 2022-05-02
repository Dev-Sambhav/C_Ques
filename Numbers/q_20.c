// Write a program to print first n Prime number with explanations.

#include <stdio.h>

// Solve
void solve(int num)
{
    int i, j;
    // first i make a loop which start from 2 to num value
    for (i = 2; i <= num; i++)
    {
        // now check each number whether it is prime or not
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
    int num;
    printf("\nEnter a Number:- ");
    scanf("%d", &num);
    solve(num);
    return 0;
}