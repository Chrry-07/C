//create a structure called student with members name, age and total marks. write a c program to input data for two students, display their information and find the average of total marks

#include <stdio.h>

struct student {
    char name[50];
    int age;
    float totalMarks;
};

int main() {
    struct student s[2];
    int i;
    float avg;

    // Input student data
    for(i = 0; i < 2; i++) {
        printf("\nEnter details for Student %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", s[i].name);
        printf("Age: ");
        scanf("%d", &s[i].age);
        printf("Total Marks: ");
        scanf("%f", &s[i].totalMarks);
    }

    // Calculate average marks
    avg = (s[0].totalMarks + s[1].totalMarks) / 2;

    // Display student info
    printf("\n--- Student Information ---\n");
    for(i = 0; i < 2; i++) {
        printf("\nName: %s\nAge: %d\nTotal Marks: %.2f\n", s[i].name, s[i].age, s[i].totalMarks);
    }

    printf("\nAverage of Total Marks = %.2f\n", avg);

    return 0;
}
