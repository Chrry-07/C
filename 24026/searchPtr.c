#include <stdio.h>

int main() {
    int n, i, target;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    printf("Enter the element to search: ");
    scanf("%d", &target);

    int *ptr = arr;
    int found = 0;

    for(i = 0; i < n; i++) {
        if(*(ptr + i) == target) {
            printf("Element %d found at position %d.", target, i + 1);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("Element %d not found in the array.", target);
    }

    return 0;
}
