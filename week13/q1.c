#include <stdio.h>

#define ADD(x, y) ((x) + (y))
#define SUB(x, y) ((x) - (y))
#define MUL(x, y) ((x) * (y))
#define DIV(x, y) ((y != 0) ? ((x) / (y)) : 0)

int main() {
    int a = 20, b = 5;

    printf("Addition = %d\n", ADD(a, b));
    printf("Subtraction = %d\n", SUB(a, b));
    printf("Multiplication = %d\n", MUL(a, b));
    printf("Division = %d\n", DIV(a, b));

    return 0;
}
