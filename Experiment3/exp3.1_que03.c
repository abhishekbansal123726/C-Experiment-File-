#include <stdio.h>

int main() {
    int x1, y1, x2, y2, x3, y3;
    int area;

    // Input coordinates
    printf("Enter point 1 (x1 y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Enter point 2 (x2 y2): ");
    scanf("%d %d", &x2, &y2);

    printf("Enter point 3 (x3 y3): ");
    scanf("%d %d", &x3, &y3);

    // Calculate area
    area = x1 * (y2 - y3) +
           x2 * (y3 - y1) +
           x3 * (y1 - y2);

    // Check collinearity
    if (area == 0) {
        printf("\nThe points are Collinear.\n");
    } else {
        printf("\nThe points are NOT Collinear.\n");
    }

    return 0;
}

