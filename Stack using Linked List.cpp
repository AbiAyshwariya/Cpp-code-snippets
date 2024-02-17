#include <stdio.h>
#include <stdlib.h>

// Define the node structure for the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to push an element onto the stack
void push(struct Node** top, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *top;
    *top = newNode;
    printf("%d pushed onto the stack.\n", data);
}

// Function to check if the stack is empty
int isEmpty(struct Node* top) {
    return top == NULL;
}

// Function to pop an element from the stack
int pop(struct Node** top) {
    if (isEmpty(*top)) {
        printf("Stack is empty. Cannot pop.\n");
        return -1; // Return a special value to indicate an error (considering stack can contain non-negative values)
    }

    struct Node* temp = *top;
    int poppedValue = temp->data;
    *top = temp->next;
    free(temp);
    return poppedValue;
}

// Function to peek the top element of the stack without popping it
int peek(struct Node* top) {
    if (isEmpty(top)) {
        printf("Stack is empty. Cannot peek.\n");
        return -1; // Return a special value to indicate an error (considering stack can contain non-negative values)
    }

    return top->data;
}

// Function to display the elements of the stack
void display(struct Node* top) {
    if (isEmpty(top)) {
        printf("Stack is empty.\n");
        return;
    }

    printf("Stack elements: ");
    while (top != NULL) {
        printf("%d ", top->data);
        top = top->next;
    }
    printf("\n");
}

// Function to free the memory used by the stack
void freeStack(struct Node* top) {
    while (top != NULL) {
        struct Node* temp = top;
        top = top->next;
        free(temp);
    }
}

int main() {
    struct Node* top = NULL;

    push(&top, 10);
    push(&top, 20);
    push(&top, 30);
    display(top); // Output: Stack elements: 30 20 10

    int popped = pop(&top);
    if (popped != -1)
        printf("Popped value: %d\n", popped); // Output: Popped value: 30

    printf("Top element: %d\n", peek(top)); // Output: Top element: 20
    display(top); // Output: Stack elements: 20 10
    printf("\n VTU23037");
    freeStack(top); // Free memory used by the stack
    return 0;
}

