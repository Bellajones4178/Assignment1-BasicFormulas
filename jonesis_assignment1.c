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
    int n;
    float saSum = 0.00;
    float volumeSum = 0.00;

    // Segment Questions + Checking for correct value
    printf("How many spherical segments you want to evaluate [2-10]?\n");
    scanf("%d", &segment);

    while (segment < 2 || segment > 10) {
        printf("How many spherical segments you want to evaluate [2-10]?\n");
        scanf("%d", &segment);
    }

    for (n=1; n <= segment; ){
        printf("Obtaining data for spherical segment number %d.\n", n);

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
            continue;
        } else if (radius < topHeight || radius < bottomHeight) {
            printf("Invalid Input.\n");
            continue;
        } else if (bottomHeight > topHeight) {
            printf("Invalid Input.\n");
            continue;
        }

        // Pre-calculations
        powerRadius = pow(radius, 2);
        powerTopHeight = pow(topHeight, 2);
        powerBottomHeight = pow(bottomHeight, 2);
        height = topHeight - bottomHeight;
        powerHeight = pow(height, 2);
        heightSquared = powerHeight;

        top = sqrt(powerRadius - powerTopHeight);
        bottom = sqrt(powerRadius - powerBottomHeight);

        // Finding Surface Areas
        saTopHeight = myPi * pow(top, 2);
        saBottomHeight = myPi * pow(bottom, 2);
        saLateral = 2 * myPi * radius * height;

        // Total Calculations
        totalSa = saTopHeight + saBottomHeight + saLateral;
        volume = (myPi * height / 6.0) * ((3 * top * top) + (3 * bottom * bottom) + powerHeight);

        saSum = saSum + totalSa;
        volumeSum = volumeSum + volume;

        printf("Total Surface Area = %.2f Volume = %.2f.\n", totalSa, volume);

        n++; 
    }
    printf("Average Surface Area %.2f Average Volume = %.2f.\n", saSum / segment, volumeSum / segment);

    return 0;
}