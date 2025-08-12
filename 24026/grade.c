#include <stdio.h>

main() {
    int marks;
    printf("Enter total marks out of 500: ");
    scanf("%d", &marks);

    int perc = (marks / 500) * 100;

    if(perc >= 75) {
        printf("Distinction.");
    }
    else if(perc >= 60 && perc < 75) {
        printf("First class.");
    }
    else if(perc >= 50 && perc < 60) {
        printf("Second class.");
    }
    else if(perc >= 40 && perc < 50) {
        printf("Third class.");
    }
    else if(perc < 40) {
        printf("Fail.");
    }
    else {
        printf("Invalid input");
    }

    return 0;
}
