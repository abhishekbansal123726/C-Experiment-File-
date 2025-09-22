#include <stdio.h>
#include <math.h>

int main() {
    int L, i, j, k, l, sum1, sum2;

    printf("Enter the limit L: ");
    scanf("%d", &L);

    printf("Ramanujan numbers up to %d:\n", L);

    for (i = 1; i <= L; i++) {
        for (j = 1; j <= L; j++) {
            for (k = 1; k <= L; k++) {
                for (l = 1; l <= L; l++) {
                    if ((i != k || j != l) && (i*i*i + j*j*j == k*k*k + l*l*l) && (i*i*i + j*j*j <= L*L*L*2)) {
                        sum1 = i*i*i + j*j*j;
                        if (sum1 <= L*L*L*2) {
                            printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", sum1, i, j, k, l);
                        }
                    }
                }
            }
        }
    }

    return 0;
}

