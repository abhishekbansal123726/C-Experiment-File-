#include <stdio.h>

int main() {
    int a = 10;  // Accessible throughout main function

    printf("Outside any block: a = %d\n", a);

    {   // Start of first block
        int b = 20;  // b is local to this block
        printf("Inside first block: a = %d, b = %d\n", a, b);
    }   // End of first block

    // printf("Outside first block: b = %d\n", b); // ❌ ERROR: b not accessible here

    {   // Start of second block
        int c = 30;  // c is local to this block
        printf("Inside second block: a = %d, c = %d\n", a, c);
    }   // End of second block

    // printf("Outside second block: c = %d\n", c); // ❌ ERROR: c not accessible here

    return 0;
}


