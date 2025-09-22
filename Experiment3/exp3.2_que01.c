#include <stdio.h>

int main() {
    int num;
    int positive = 0, negative = 0, zero = 0;
    char choice;

    do {
        // Take number input
        printf("Enter a number: ");
        scanf("%d", &num);

        // Count check
        if (num > 0) {
            positive++;
        } 
        else if (num < 0) {
            negative++;
        } 
        else {
            zero++;
        }

        // Ask user if they want to continue
        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);   // space before %c to avoid newline issue

    } while (choice == 'y' || choice == 'Y');

    // Final result
    printf("\nCount of Positive numbers: %d\n", positive);
    printf("Count of Negative numbers: %d\n", negative);
    printf("Count of Zeros: %d\n", zero);

    return 0;
}

