// to read array of elements and display

#include <stdio.h>

int main() {
    int age[5];
    printf("Enter values: ");

    for (int i = 0; i < 5; i++){
        scanf("%d", &age[i]);
        printf("%d\n", age[i]);
    }
    return 0;
}
