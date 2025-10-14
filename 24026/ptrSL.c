#include <stdio.h>

void findLargestAndSmallest(int *arr, int size, int *largest, int *smallest) {
    *largest = *smallest = *arr; // Initialize largest and smallest with the first element
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > *largest) {
            *largest = *(arr + i);
        }
        if (*(arr + i) < *smallest) {
            *smallest = *(arr + i);
        }
    }
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest, smallest;
    findLargestAndSmallest(arr, n, &largest, &smallest);

    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);

    return 0;
}
