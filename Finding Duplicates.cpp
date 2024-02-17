#include <stdio.h>
#define SIZE 100
void findDuplicates(int arr[], int size) {
    int i, j;
    printf("Duplicate elements in the array: ");
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                printf("The duplicate is present in the position:%d",j);
                break;
            }
        }
    }
    printf("\n");
}
int main() {
    int arr[SIZE];
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter elements in the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    findDuplicates(arr, size);
    return 0;
}
