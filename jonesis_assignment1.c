#include <stdio.h>
#include <math.h>

int main(void) {
    // Declaring Variables
    int segment;
    float radius;
    float topHeight;
    float bottomHeight;
    float saTopHeight;
    float saBottomHeight;
    float saSurfaceArea;
    float saLateral;
    float powerTopHeight;
    float powerBottomHeight;
    const float myPi = 3.14159265359;

    // Segment Questions
    printf("How many spherical segments do you want to evaluate [2-10]?\n");
    scanf("%d", &segment);
    
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
    printf("Entered data: R = %.2f ha = %.2f hb = %.2f.\n", radius, topHeight, bottomHeight);

    // Checking for correct values
    if (radius < 0 || topHeight < 0 || bottomHeight < 0) {
        printf("Invalid Input.");
    } else if (radius < topHeight || radius < bottomHeight) {
        printf("Invalid Input.");
    } else if (bottomHeight > topHeight) {
        printf("Invalid Input.");
    }

    // Finding Surface Area
    powerTopHeight = pow(topHeight, 2);
    saTopHeight = powerTopHeight * myPi;
    printf("%.2f", saTopHeight);

    powerBottomHeight = pow(bottomHeight, 2);
    saBottomHeight = powerBottomHeight * myPi;
    printf("%.2f", saBottomHeight);

    saLateral = 2 * myPi * radius * topHeight * bottomHeight;
    printf("%.2f", saLateral);


    return 0;
}