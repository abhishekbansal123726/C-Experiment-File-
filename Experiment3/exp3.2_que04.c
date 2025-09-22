#include <stdio.h>

int main() {
    double population = 100000;
    double rate = 10; // 10%
    int year;

    printf("Year\tPopulation\n");

    for (year = 1; year <= 10; year++) {
        population = population * (1 + rate / 100);
        printf("%d\t%.0lf\n", year, population);
    }

    return 0;
}

