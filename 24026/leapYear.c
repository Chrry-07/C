#include <stdio.h>

main() {
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    if(year % 4 == 0 && year %100 != 0 || year %400 == 0) {
        printf("The year is leap year.");
    } else {
        printf("The year is not leap year.");
    }

    return 0;
}
