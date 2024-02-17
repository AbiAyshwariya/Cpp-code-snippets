#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
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

// Function to insert a node at the beginning of the linked list
void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

// Function to insert a node at the end of the linked list
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);

    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to delete the first occurrence of a node with given data
void deleteNode(struct Node** head, int data) {
    if (*head == NULL) {
        printf("List is empty, cannot delete.\n");
        return;
    }

    struct Node* current = *head;
    struct Node* prev = NULL;

    while (current != NULL) {
        if (current->data == data) {
            if (prev == NULL) {
                *head = current->next;
            } else {
                prev->next = current->next;
            }
            free(current);
            return;
        }
        prev = current;
        current = current->next;
    }

    printf("Element not found in the list.\n");
}

// Function to display the elements of the linked list
void displayList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Function to check if the linked list is empty
int isEmpty(struct Node* head) {
    return head == NULL;
}

// Function to check if the linked list is full (In most cases, linked lists are not full)
int isFull(struct Node* head) {
    return 0;
}

// Function to sort the elements of the linked list in ascending order using bubble sort
void sortList(struct Node* head) {
    int swapped, i;
    struct Node* ptr1;
    struct Node* lptr = NULL;

    if (head == NULL)
        return;

    do {
        swapped = 0;
        ptr1 = head;

        while (ptr1->next != lptr) {
            if (ptr1->data > ptr1->next->data) {
                int temp = ptr1->data;
                ptr1->data = ptr1->next->data;
                ptr1->next->data = temp;
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapped);
}

// Function to free the memory allocated for the linked list
void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    struct Node* head = NULL;

    // Insert elements at the beginning
    insertAtBeginning(&head, 5);
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 1);

    // Insert elements at the end
    insertAtEnd(&head, 7);
    insertAtEnd(&head, 9);

    printf("Linked List: ");
    displayList(head);

    // Delete elements
    deleteNode(&head, 3);
    deleteNode(&head, 7);

    printf("Linked List after deletion: ");
    displayList(head);

    // Sorting the elements
    sortList(head);

    printf("Sorted Linked List: ");
    displayList(head);

    // Checking if the linked list is empty or full
    if (isEmpty(head)) {
        printf("Linked list is empty.\n");
    } else {
        printf("Linked list is not empty.\n");
    }

    if (isFull(head)) {
        printf("Linked list is full.\n");
    } else {
        printf("Linked list is not full.\n");
    }

    // Free the memory allocated for the linked list
    freeList(head);
    printf("S.Abi Ayshwariya VTU23037");
    return 0;
}
