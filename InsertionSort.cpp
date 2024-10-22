#include <stdio.h>

// Function to perform insertion sort
void insertion_sort(int arr[], int size) {
    int i, key, j;

    // Traverse from the second element to the last element
    for (i = 1; i < size; i++) {
        key = arr[i]; // The element to be inserted into the sorted portion
        j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Function to print an array
void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    print_array(arr, size);

    insertion_sort(arr, size);

    printf("Sorted array:\n");
    print_array(arr, size);

    return 0;
}


// Time Complexity:
// Best Case: O(n)
// Average Case: O(n2)
// Worst Case: O(n2)

// Space Complexity: O(1)