#include <stdio.h>

const long double PI = 3.14159265358979323;

void circleCircumference()
{
    float radius;
    printf("Enter radius in centimeters: ");
    scanf(" %f", &radius);
    printf("The circumference of a circle with radius %.2f is %.2LF centimeters.\n", radius, (2*PI*radius));
    return;
}