#include <stdio.h>
#include <stdlib.h>

// Structure to represent a node in the doubly linked list
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the end of the doubly linked list
void insertEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
        newNode->prev = current;
    }
}

// Function to delete a node from the doubly linked list
void deleteNode(struct Node** head, int key) {
    if (*head == NULL)
        return;

    struct Node* current = *head;
    while (current != NULL) {
        if (current->data == key) {
            if (current->prev != NULL)
                current->prev->next = current->next;
            else
                *head = current->next;

            if (current->next != NULL)
                current->next->prev = current->prev;

            free(current);
            return;
        }
        current = current->next;
    }
}

// Function to perform bubble sort on the doubly linked list
void bubbleSort(struct Node* head) {
    int swapped, temp;
    struct Node* left;
    struct Node* right = NULL;

    if (head == NULL)
        return;

    do {
        swapped = 0;
        left = head;

        while (left->next != right) {
            if (left->data > left->next->data) {
                temp = left->data;
                left->data = left->next->data;
                left->next->data = temp;
                swapped = 1;
            }
            left = left->next;
        }
        right = left;
    } while (swapped);
}

// Function to display the doubly linked list
void display(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Function to free the memory allocated for the doubly linked list
void freeMemory(struct Node* head) {
    struct Node* current = head;
    struct Node* next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
}

int main() {
    struct Node* head = NULL;

    // Creating the doubly linked list
    insertEnd(&head, 5);
    insertEnd(&head, 3);
    insertEnd(&head, 9);
    insertEnd(&head, 1);
    insertEnd(&head, 7);

    printf("Original List: ");
    display(head);

    // Deleting a node
    deleteNode(&head, 3);
    printf("List after deleting 3: ");
    display(head);

    // Sorting the list
    bubbleSort(head);
    printf("Sorted List: ");
    display(head);
    printf("\n VTU23037");
    // Freeing the memory
    freeMemory(head);

    return 0;
}
