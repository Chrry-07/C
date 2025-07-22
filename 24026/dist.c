#include <stdio.h>

int main() {

    int speed, time;
    int distance;

    printf("Enter the values of speed and time: ");
    scanf("%d %d", &speed, &time);

    distance = speed / time;
    printf("the distance traveled by an object is: %.d\n m", distance);

return 0;
}
