#include <stdio.h>

int main() {
    int x = 8;   // Binary: 1000

    printf("Original value: %d\n", x);

    printf("Left Shift (x << 1) = %d\n", x << 1);   // 1000 → 10000 (16)
    printf("Right Shift (x >> 1) = %d\n", x >> 1);  // 1000 → 0100 (4)

    return 0;
}
