#include <stdio.h>
#include <math.h>

// Declaring "double" functions
double askForUserInput();
double calculatePerimeter();
double calculateDistance();
double calculateArea();
double calculateWidth();
double calculateHeight();

// Main function with the two defined arguments
int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateDistance();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}

// First fractured function (asking the user for input)
double askForUserInput() {
    double value;
    printf("Enter a value: ");
    scanf("%lf", &value);
    return value;
}

// Second fractured function (Calculating distance between points)
double calculateDistance(){
    double x1 = askForUserInput();
    double y1 = askForUserInput();
    double x2 = askForUserInput();
    double y2 = askForUserInput();

    // Calculations using user input
    double distance = sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));

    // Output for the result of the calculations
    printf("Point #1 entered: x1 = %lf; y1 = %lf \n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf \n", x2, y2);
    printf("The distance between the points is %lf \n", distance);

    return distance;
}

// Third fractured function (Calculating perimeter)
double calculatePerimeter(){
    double distance = calculateDistance();

    // Setting perimeter = 2x(distance + distance) assuming
    // it's rectangular to make calculations easier
    double perimeter = 2*(distance + distance);

    // Output the result from calculations
    printf("The perimeter is %lf \n", perimeter);

    // Returning the difficulty rating
    return 2.5;
}

// Fourth fractured function (Calculating area)
double calculateArea() {
    double distance = calculateDistance();

    // Just like perimeter, going to assume the area
    // is rectangular to make calculations easier
    double area = distance * distance;

    // Output the result of the calculations
    printf("The area is %lf \n", area);

    // Returning difficulty rating
    return 2.0;
}

// Fifth fractured function (Calculating width)
double calculateWidth() {

    // Calculation for width being the difference
    // between x1 and x2 (reinserting the double x1 and x2 functions)
    double x1 = askForUserInput();
    double x2 = askForUserInput();
    double width = fabs(x2-x1);

    // Output of the result
    printf("Point #1: x1 = %lf \n", x1);
    printf("Point #2: x2 = %lf \n", x2);
    printf("The width is %lf \n", width);

    // Difficulty rating
    return 4.0 // mainly because it took me a while to
                // realize that I had to insert the double x1
                // and x2 functions into this function
}

// Final fractured function (Calculating Height)
double calculateHeight() {
    double y1 = askForUserInput();
    double y2 = askForUserInput();

    // Similarly to width, calculating height as
    // the difference between y1 and y2
    double height = fabs(y2-y1);

    // Output for the result
    printf("Point #1: y1 = %lf \n", y1);
    printf("Point #2: y2 = %lf \n", y2);
    printf("The height is %lf \n", height);

    // Difficulty rating
    return 3.0 // Lower than width becasue I already knew to reinsert
                // the double y1 and y2 functions
}