//design a structure named car to store details like carID, model, and rental rate per day. write a c program to input data for the three cars, calculate the total rental cost for the specified number of days and display the results

#include <stdio.h>

struct car {
    int carID;
    char model[50];
    float ratePerDay;
};

int main() {
    struct car c[3];
    int i, days;

    // Input car details
    for(i = 0; i < 3; i++) {
        printf("\nEnter details for Car %d\n", i + 1);
        printf("Car ID: ");
        scanf("%d", &c[i].carID);
        printf("Model: ");
        scanf(" %[^\n]", c[i].model);
        printf("Rental rate per day: ");
        scanf("%f", &c[i].ratePerDay);
    }

    printf("\nEnter number of days for rental: ");
    scanf("%d", &days);

    // Display rental cost
    printf("\n--- Rental Details ---\n");
    for(i = 0; i < 3; i++) {
        float totalCost = c[i].ratePerDay * days;
        printf("\nCar ID: %d\nModel: %s\nRate/Day: %.2f\nTotal Cost for %d days: %.2f\n",
               c[i].carID, c[i].model, c[i].ratePerDay, days, totalCost);
    }

    return 0;
}
