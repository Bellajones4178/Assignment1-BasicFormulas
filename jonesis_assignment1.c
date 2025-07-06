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
    float totalSa;
    float volume;
    float powerRadius;
    float powerTopHeight;
    float powerBottomHeight;
    float powerHeight;
    float heightSquared;
    float top;
    float bottom;
    float height;
    const float myPi = 3.14159265359;

    // Segment Questions
    printf("How many spherical segments do you want to evaluate [2-10]?\n");
    scanf("%d", &segment);

    // Check for correct value
    if (segment < 2 || segment > 10) {
        printf("Invalid Input: Segment count must be between 2 and 10.\n");
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

    // Print Parameters entered by user
    printf("Entered data: R = %.2f ha = %.2f hb = %.2f.\n", radius, topHeight, bottomHeight);

    // Checking for correct values
    if (radius < 0 || topHeight < 0 || bottomHeight < 0) {
        printf("Invalid Input.\n");
        return 0;
    } else if (radius < topHeight || radius < bottomHeight) {
        printf("Invalid Input.\n");
        return 0;
    } else if (bottomHeight > topHeight) {
        printf("Invalid Input.\n");
        return 0;
    }

    // Pre-calculations
    powerRadius = pow(radius, 2);
    powerTopHeight = pow(topHeight, 2);
    powerBottomHeight = pow(bottomHeight, 2);
    height = topHeight - bottomHeight;
    powerHeight = pow(height, 2);
    heightSquared = pow(height, 2); // same as powerHeight

    top = powerRadius - powerTopHeight;
    bottom = powerRadius - powerBottomHeight;

    // Finding Surface Areas
    saTopHeight = myPi * top;
    printf("Top cap surface area: %.2f\n", saTopHeight);

    saBottomHeight = myPi * bottom;
    printf("Bottom cap surface area: %.2f\n", saBottomHeight);

    saLateral = 2 * myPi * radius * height;
    printf("Lateral surface area: %.2f\n", saLateral);

    totalSa = saTopHeight + saBottomHeight + saLateral;
    printf("Total surface area: %.2f\n", totalSa);

    // Volume
    volume = (1.0 / 6.0) * myPi * height * ((3 * powerTopHeight) + (3 * powerBottomHeight) + powerHeight);
    printf("Volume: %.2f\n", volume);

    return 0;
}