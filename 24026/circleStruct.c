//define a structure named circle to represent a circle with a radius. write a c program to calculate the area and the perimeter of two circles and display the results.

#include <stdio.h>
#define PI 3.1416

struct circle {
    float radius;
};

int main() {
    struct circle c1, c2;
    float area1, area2, peri1, peri2;

    // Input for two circles
    printf("Enter radius of Circle 1: ");
    scanf("%f", &c1.radius);
    printf("Enter radius of Circle 2: ");
    scanf("%f", &c2.radius);

    // Calculate area and perimeter
    area1 = PI * c1.radius * c1.radius;
    peri1 = 2 * PI * c1.radius;

    area2 = PI * c2.radius * c2.radius;
    peri2 = 2 * PI * c2.radius;

    // Display results
    printf("\nCircle 1 -> Area: %.2f, Perimeter: %.2f", area1, peri1);
    printf("\nCircle 2 -> Area: %.2f, Perimeter: %.2f\n", area2, peri2);

    return 0;
}
