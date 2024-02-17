#include <stdio.h>
#define SIZE 6
void createArray(int arr[], int size) {
    int i;
    printf("Enter %d elements in the array:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}
void displayArray(int arr[], int size) {
    int i;
    printf("Elements in the array are: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void insertElement(int arr[], int *size, int element, int position) {
    int i;
    if (*size >= SIZE) {
        printf("Array is full. Cannot insert element.\n");
        return;
    }
    // Shifting elements to the right
    for (i = *size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }
    arr[position] = element;
    (*size)++;
    printf("Element inserted successfully.\n");
}
void deleteElement(int arr[], int *size, int position) {
    int i;
    if (*size == 0) {
        printf("Array is empty. Cannot delete element.\n");
        return;
    }
    // Shifting elements to the left
    for (i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
    printf("Element deleted successfully.\n");
}

int findMinElement(int arr[], int size) {
    int i;
    int min = arr[0];

    for (i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
int findMaxElement(int arr[], int size) {
    int i;
    int max = arr[0];

    for (i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int main() {
    int arr[SIZE];
    int size = 0;
    int choice, element, position;
    do {
        printf("\nArray Operations:\n");
        printf("1. Create Array\n");
        printf("2. Display Array\n");
        printf("3. Insert Element\n");
        printf("4. Delete Element\n");
        printf("5. Find Minimum Element\n");
        printf("6. Find Maximum Element\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                createArray(arr, SIZE);
                size = SIZE;
                break;
            case 2:
                displayArray(arr, size);
                break;
            case 3:
                printf("Enter the element to be inserted: ");
                scanf("%d", &element);
                printf("Enter the position where the element should be inserted: ");
                scanf("%d", &position);
                insertElement(arr, &size, element, position);
                break;
            case 4:
                printf("Enter the position of the element to be deleted: ");
                scanf("%d", &position);
                deleteElement(arr, &size, position);
                break;
            case 5:
                printf("Minimum element in the array: %d\n", findMinElement(arr, size));
                break;
            case 6:
                printf("Maximum element in the array: %d\n", findMaxElement(arr, size));
                break;
            case 7:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 7);

    return 0;
}
