// Write a program to find prime factors of a given integer.

#include <stdio.h>

// Solve
void solve(int num)
{
    int i,j;
    for(i=2;i<=num/2;i++){
        if(num%i==0){
            int isPrime = 1;
            //check prime number or not
            for(j=2;j<i;j++){
                if(i%j==0){
                   isPrime = 0;
                   break; 
                }
            }
            if(isPrime){
                printf("%d ",i);
            }
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