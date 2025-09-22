#include <stdio.h>

void myFunction() {
    static int count = 0;  // Static local variable
    int regular = 0;       // Normal local variable

    count++;       // Persists across function calls
    regular++;     // Resets every time function is called

    printf("Static variable = %d, Regular variable = %d\n", count, regular);
}

int main() {
    printf("First call:\n");
    myFunction();

    printf("Second call:\n");
    myFunction();

    printf("Third call:\n");
    myFunction();

    return 0;
}

