#include <stdio.h>
#include <math.h>

int main(void) {
    // Declaring Variables
    float segment;
    float radius;
    float topHeight;
    float bottomHeight;

    // Segment Questions
    printf("How many spherical segments do you want to evaluate [2-10]?\n");
    scanf("%f", &segment);
    
    // Check for correct value
    if (segment < 2) {
        return 0;
    } else if (segment > 10) {
        return 0;
    } else {
        printf("Obtaining data for spherical segment number 1.\n");
    }

    // Parameters questions
    printf("What is the radius of the sphere (R)?\n");
    scanf("%f", &radius);

    printf("What is the height of the top area of the spherical segment (ha)?\n");
    scanf("%f", &topHeight);

    printf("What is the height of the bottom area of the spherical segment (hb)?\n");
    scanf("%f", &bottomHeight);

    // Print Paramenters entered by user
    printf("Entered data: R = %.2f ha = %.2f hb = %.2f./n", radius, topHeight, bottomHeight);

    // Checking for correct values
    if (radius, topHeight, bottomHeight < 0) {
        printf("Invalid Input.");
    } else if (radius < topHeight, bottomHeight) {
        printf("Invalid Input.");
    } else if (bottomHeight > topHeight) {
        printf("Invalid Input.");
    }

    return 0;
}