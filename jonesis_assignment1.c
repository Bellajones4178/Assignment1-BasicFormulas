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
    float totalSa;
    float volume;
    float powerRadius;
    float top;
    float bottom;
    float height;
    float topSquared;
    float bottomSquared;
    float heightSquared;
    float powerHeight;


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
        return 0;
    } else if (radius < topHeight || radius < bottomHeight) {
        printf("Invalid Input.");
        return 0;
    } else if (bottomHeight > topHeight) {
        printf("Invalid Input.");
        return 0;
    }

    // Finding a, b, and h
    powerRadius = pow(radius, 2);
    top = powerRadius - powerTopHeight;
    bottom = powerRadius - powerBottomHeight;
    
    topSquared = sqrt(top);
    bottomSquared = sqrt(bottom);

    height = topHeight - bottomHeight;

    heightSquared = sqr(height);
    powerHeight = pow(height, 2);

    // Finding Surface Area
    powerTopHeight = pow(topSquared, 2);
    saTopHeight = powerTopHeight * myPi;

    powerBottomHeight = pow(bottomSquared, 2);
    saBottomHeight = powerBottomHeight * myPi;

    saLateral = 2 * myPi * radius * topHeight * height;

    // Finding Total Surface Area and Volume
    totalSa = saTopHeight + saBottomHeight + saLateral;

    volume = (1/6) * myPi * height * ((3*powerTopHeight) + (3*(powerBottomHeight) + (3 * powerHeight)));


    printf("Total Surface Area = %.2f Volume = %.2f", totalSa, volume);

    return 0;
}