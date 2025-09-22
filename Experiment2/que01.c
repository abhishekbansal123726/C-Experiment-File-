#include <stdio.h>

int main() {
    float length, width, area, perimeter;

    // Input length and width
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculations
    area = length * width;
    perimeter = 2 * (length + width);

    // Output
    printf("\nArea of rectangle = %.2f\n", area);
    printf("Perimeter of rectangle = %.2f\n", perimeter);

    return 0;
}

