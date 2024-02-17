#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

// Structure to represent the stack
struct Stack {
    int arr[MAX_SIZE];
    int top;
};

// Function to initialize the stack
void initStack(struct Stack* stack) {
    stack->top = -1;
}

// Function to check if the stack is empty
bool isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Function to check if the stack is full
bool isFull(struct Stack* stack) {
    return stack->top == MAX_SIZE - 1;
}

// Function to push an element onto the stack
void push(struct Stack* stack, int data) {
    if (isFull(stack)) {
        printf("Error: Stack Overflow\n");
        return;
    }

    stack->arr[++stack->top] = data;
}

// Function to pop an element from the stack
int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Error: Stack Underflow\n");
        return -1;
    }

    return stack->arr[stack->top--];
}

// Function to get the top element of the stack without removing it
int peek(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Error: Stack is empty\n");
        return -1;
    }

    return stack->arr[stack->top];
}

int main() {
    struct Stack stack;
    initStack(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    push(&stack, 40);

    printf("Top element of the stack: %d\n", peek(&stack));

    printf("Popping elements from the stack: ");
    while (!isEmpty(&stack)) {
        printf("%d ", pop(&stack));
    }
    printf("\n");
    printf("\n VTU23037");

    return 0;
}
