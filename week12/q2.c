#include <stdio.h>

#define SQUARE(x) ((x) * (x))   // Function-like macro

int main() {
    int num = 5;

    printf("Number = %d\n", num);
    printf("Square using macro = %d\n", SQUARE(num));

    return 0;
}
