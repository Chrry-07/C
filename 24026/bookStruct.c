//create a structure named book to store book details like title, author, price. write a C program to input details for three books, find the most expensive and the lowest priced books and display their information
//design a structure named car to store details like carID, model, and rental rate per day. write a c program to input data for the three cars, calculate the total rental cost for the specified number of days and display the results
//create a structure called student with members name, age and total marks. write a c program to input data for two students, display their information and find the average of total marks
#include <stdio.h>

struct book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    struct book b[3];
    int i, maxIndex = 0, minIndex = 0;

    // Input details for 3 books
    for(i = 0; i < 3; i++) {
        printf("\nEnter details for Book %d\n", i + 1);
        printf("Title: ");
        scanf(" %[^\n]", b[i].title);
        printf("Author: ");
        scanf(" %[^\n]", b[i].author);
        printf("Price: ");
        scanf("%f", &b[i].price);
    }

    // Find most expensive and lowest priced books
    for(i = 1; i < 3; i++) {
        if(b[i].price > b[maxIndex].price)
            maxIndex = i;
        if(b[i].price < b[minIndex].price)
            minIndex = i;
    }

    // Display results
    printf("\nMost Expensive Book:\nTitle: %s\nAuthor: %s\nPrice: %.2f\n",
           b[maxIndex].title, b[maxIndex].author, b[maxIndex].price);

    printf("\nLowest Priced Book:\nTitle: %s\nAuthor: %s\nPrice: %.2f\n",
           b[minIndex].title, b[minIndex].author, b[minIndex].price);

    return 0;
}
