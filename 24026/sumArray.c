// to perform addition of elements in an array

#include <stdio.h>

int main() {
    int a[10], n, i, sum = 0;

    printf("Enter n value: ");
    scanf("%d", &n);

    printf("\nEnter array values: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        sum += a[i];
    }
    printf("Sum: %d", &sum);

    return 0;
}
