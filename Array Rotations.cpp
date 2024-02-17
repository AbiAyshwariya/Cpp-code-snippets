#include <stdio.h>
#define SIZE 100
void rotateArrayLeft(int arr[], int size, int rotations) {
    int i, j;
    // Perform left rotations
    for (i = 0; i < rotations; i++) {
        int temp = arr[0];

        // Shift elements to the left
        for (j = 0; j < size - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[size - 1] = temp;
    }
}
void rotateArrayRight(int arr[], int size, int rotations) {
    int i, j;
    // Perform right rotations
    for (i = 0; i < rotations; i++) {
        int temp = arr[size - 1];
        // Shift elements to the right
        for (j = size - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }
}
void displayArray(int arr[], int size) {
    int i;
    printf("Array elements: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[SIZE];
    int size, i, rotations, choice;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter elements in the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of rotations: ");
    scanf("%d", &rotations);
    printf("Choose rotation direction:\n");
    printf("1. Left Rotation\n");
    printf("2. Right Rotation\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            rotateArrayLeft(arr, size, rotations);
            printf("Array rotated left by %d positions.\n", rotations);
            break;
        case 2:
            rotateArrayRight(arr, size, rotations);
            printf("Array rotated right by %d positions.\n", rotations);
            break;
        default:
            printf("Invalid choice. Rotation direction not recognized.\n");
            return 1;
    }
    displayArray(arr, size);
    return 0;
}
