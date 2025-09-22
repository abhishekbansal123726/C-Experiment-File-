#include <stdio.h>

int main() {
    char name[50];   // To store the name
    int age;         // To store the age

    // Asking for input
    printf("Enter your name: ");
    scanf("%s", name);   // %s for string input (single word)

    printf("Enter your age: ");
    scanf("%d", &age);   // %d for integer input

    // Displaying output
    printf("\nHello %s! You are %d years old.\n", name, age);

    return 0;
}

