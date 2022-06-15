// Program to implement Stack -> Push and pop (Array implementation)
// SOMNATH BEDIA

#include <stdio.h>
#include <stdlib.h>
#define MAX 7

// Global declaration of stack_arr[] and top variable. so we can access from anywhere
int stack_arr[MAX];
int top = -1;

void push(int data)
{
    if (top == MAX - 1) // Checking overflow condition
    {
        printf("Stack Overflow\n");
    }
    top = top + 1;
    stack_arr[top] = data;
}

int pop()
{
    int value;
    if (top == -1) // Checking underflow condition
    {
        printf("Stack Underflow\n");
        printf("Stack is empty\n");
        exit(1);
    }

    value = stack_arr[top];
    top = top - 1;
    return value;
}

// function to check whether stack is full
/*
int isFull()
{
    if(top == MAX - 1){
        return 1;
    }
    else return 0;
}
*/

// Function to check whether stack is empty or not

/*
int isEmpty()
{
    if(top == -1)
    return 1;
    else return 0;
}
*/

int main()
{
    // pushing elements into the stack
    push(4);
    push(6);
    push(48);
    push(88);
    push(12);
    push(17);
    push(40);

    printf("Stack is: [ ");
    for (int i = 0; i < MAX; i++)
    {
        printf("%d ", stack_arr[i]);
    }
    printf("]");
    printf("\n");

    // Remove elements from the stack

    printf("popped: %d \n", pop());
    printf("Popped: %d\n", pop());
    printf("Popped: %d\n", pop());
    printf("Popped: %d\n", pop());

    return 0;
}