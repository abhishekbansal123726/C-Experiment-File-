#include <stdio.h>

int main() {
    int a, b, c;

    // Taking input of 3 sides
    printf("Enter side a: ");
    scanf("%d", &a);
    printf("Enter side b: ");
    scanf("%d", &b);
    printf("Enter side c: ");
    scanf("%d", &c);

    // Step 1: Check validity
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("\nThe triangle is valid.\n");

        // Step 2: Check type
        if (a == b && b == c) {
            printf("It is an Equilateral triangle.\n");
        }
        else if (a == b || b == c || a == c) {
            printf("It is an Isosceles triangle.\n");
        }
        else if ((a * a + b * b == c * c) ||
                 (a * a + c * c == b * b) ||
                 (b * b + c * c == a * a)) {
            printf("It is a Right-angled triangle.\n");
        }
        else {
            printf("It is a Scalene triangle.\n");
        }
    }
    else {
        printf("\nThe triangle is not valid.\n");
    }

    return 0;
}

