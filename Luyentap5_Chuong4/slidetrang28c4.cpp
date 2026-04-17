#include <stdio.h>
#define PI 3.14159

float calculateArea(float radius) {
    return PI * radius * radius;
}
int main() {
    float radius = 5.5;
    float area = calculateArea(radius);
    printf("The area of the circle with radius %.2f is %.2f", radius, area);
    return 0;
}