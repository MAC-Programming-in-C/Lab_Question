#include <stdio.h>
#include <math.h>

int main() {
    double current_population = 100000;
    double rate = 0.10;
    int years = 10;

    
    double population = current_population / pow(1 + rate, years);

    printf("Year\tPopulation\n");
    printf("---------------------\n");

    for (int i = 1; i <= years; i++) {
        population = population + (population * rate); 
        printf("%d\t%.0f\n", i, population); 
    }

    return 0;
}