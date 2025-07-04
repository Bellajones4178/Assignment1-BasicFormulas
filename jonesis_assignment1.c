#include <stdio.h>
#include <math.h>

int main(void) {
    // Declaring Variables
    float segment;

    // Evaluation Questions
    printf("How many spherical segments do you want to evaluate [2-10]?\n");
    scanf("%f", &segment);
    
    // Check for correct value
    if (segment < 2) {
        return 0;
    } else if (segment > 10) {
        return 0;
    } else {
        printf("Obtaining data for spherical segment number 1\n");
    }

    return 0;
}