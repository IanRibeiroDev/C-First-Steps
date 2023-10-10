#include "shapes.h"
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

int main() {
    double circleRadius;
    float squareSide;
    float rectangleBase;
    float rectangleHeight;
    unsigned short option;

    printf("This program will calculate the area and perimeter of a polygon, or the diameter and circumference of a"
           " circle, based on which option you choose.\n");
    sleep(2);
    printf("Ready? Then let's get started!\n");
    sleep(2);

    while(true) {
        printf("Option 1: Circle\n");
        printf("Option 2: Rectangle\n");
        printf("Option 3: Square\n");
        printf("Option 4: Exit\n");
        printf("Choose an option and press enter: ");
        scanf("%hu", &option);

        if (option == 1) {
            printf("Please enter the radius of the circle: ");
            scanf("%lf", &circleRadius);

            printf("Circle's diameter: %.3lf\n", diameter(circleRadius));
            printf("Circle's circumference: %.3lf\n\n", circumference(circleRadius));
            sleep(5);

        } else if (option == 2) {
            printf("Please enter the base of the rectangle: ");
            scanf("%f", &rectangleBase);
            printf("Please enter the height of the rectangle: ");
            scanf("%f", &rectangleHeight);

            printf("Rectangle's perimeter: %.2f\n", rectanglePerimeter(rectangleBase, rectangleHeight));
            printf("Rectangle's area: %.2f\n\n", rectangleArea(rectangleBase, rectangleHeight));
            sleep(5);

        } else if (option == 3) {
            printf("Please enter the value of one of the square's sides: ");
            scanf("%f", &squareSide);

            printf("Square's perimeter: %.2f\n", squarePerimeter(squareSide));
            printf("Square's area: %.2f\n\n", squareArea(squareSide));
            sleep(5);

        } else if (option == 4) {
            printf("Thank you for using my program :)\n\n");
            sleep(2);
            break;

        } else {
            printf("Invalid option, please try another one.\n\n");
            sleep(2);
        }
    }
    return 0;
}