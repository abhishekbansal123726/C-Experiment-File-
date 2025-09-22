#include <stdio.h>

// Global variable declaration
int globalVar = 10;  // This is accessible in all functions

// Function 1
void function1() {
    printf("Inside function1, globalVar = %d\n", globalVar);
}

// Function 2
void function2() {
    globalVar += 5;  // Modify global variable
    printf("Inside function2, globalVar = %d\n", globalVar);
}

int main() {
    printf("Inside main, globalVar = %d\n", globalVar);

    function1(); // Access global variable
    function2(); // Modify and access global variable

    printf("Back in main, globalVar = %d\n", globalVar);

    return 0;
}

