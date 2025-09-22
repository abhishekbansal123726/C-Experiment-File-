#include <stdio.h>

// Global variable
int globalVar = 100;

void myFunction() {
    // Local variable
    int localVar = 50;

    printf("Inside myFunction:\n");
    printf("Local variable = %d\n", localVar);      // Accessible here
    printf("Global variable = %d\n", globalVar);    // Accessible here
}

int main() {
    myFunction();

    printf("\nInside main:\n");
    // printf("Local variable = %d\n", localVar);  // ❌ ERROR: localVar not accessible here
    printf("Global variable = %d\n", globalVar);   // ✅ Accessible here

    return 0;
}

