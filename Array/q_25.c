// Write a program to add two number using recursion.
#include<stdio.h>

// Add function using recursion
int add(int n1,int n2){
    if(n2==0){
        return n1;
    }
    return add(n1,n2-1)+1;
}
int main(){
    int n1,n2,sum;
    printf("\nEnter First Number:- ");
    scanf("%d",&n1);
    printf("Enter Second Number:- ");
    scanf("%d",&n2);
    sum = add(n1,n2);
    printf("\nSum of %d and %d is %d",n1,n2,sum);
return 0;
}