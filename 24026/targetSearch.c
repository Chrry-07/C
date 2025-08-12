#include <stdio.h>

int main() {
    int a[n];
    int n, i, target, count = 0;

    // Reading the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Reading the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("\nEnter target value: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        if(a[i] == target) {
            printf("target is at %d ", i);
            count++;
            break;
        }
    }

    if (count == 0) {
        printf("Target not found.");
    } else
        printf("\nsearch successful");

    return 0;
}
