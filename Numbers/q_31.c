// Write a program to convert decimal number into binary.

#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

// init. empty stack globally because we use in every function
int stack[SIZE];
// this variable is also used in every function
int top = -1; // -1 means Stack is initially empty

// this function will check whether Stack is empty or not
int isEmpty()
{
    if (top == -1)
    {
        return 1; // return 1 means True
    }
    else
    {
        return 0; // return 0 means False
    }
}

// this function will check whether Stack is full or not
int isFull()
{
    if (top == SIZE - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// this function accepts a element and push the element into top of th stack
void push(int n)
{
    // checking the stack whether it is full or not
    if (isFull())
    {
        printf("\nStack is Full");
        exit(1);
    }
    else
    {
        top++;
        stack[top] = n;
    }
}

// this function will remove the pop data from top of the stack and return the pop data to the caller
int pop()
{
    int pop_data;
    // checking the stack whether it is empty or not
    if (isEmpty())
    {
        printf("\nStack is Empty");
        exit(1);
    }
    else
    {
        pop_data = stack[top];
        top--;
        return pop_data;
    }
}

// this function will accepts a decimal number and push the all the remainders into the stack
void decimal_binary(int n)
{
    // pushing all the remainders one by one into stack
    while (n != 0)
    {
        push(n % 2);
        n = n / 2;
    }
}

// this function will shows all the element from the stack one by one
void display()
{
    if (isEmpty())
    {
        printf("Stack is Empty");
        exit(1);
    }
    // just poping all the elements from the stack until stack becomes empty
    while (!isEmpty())
    {
        printf("%d ", pop());
    }
}

int main()
{
    int d_num;
    printf("\nEnter a Decimal Number: ");
    scanf("%d", &d_num);
    decimal_binary(d_num);
    printf("\nBinary : ");
    display();

    return 0;
}