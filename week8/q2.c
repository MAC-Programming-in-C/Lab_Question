#include <stdio.h>

int main() {
    int x = 100;
    float y = 20.5;
    char z = 'A';

    int *p1 = &x;
    float *p2 = &y;
    char *p3 = &z;

    printf("----- Pointer Arithmetic -----\n");

    printf("Original p1 (int*): %p\n", p1);
    p1++;  // moves by 4 bytes
    printf("After p1++: %p\n", p1);
    p1--;  // back to original
    printf("After p1--: %p\n\n", p1);

    printf("Original p2 (float*): %p\n", p2);
    p2++;  // moves by 4 bytes
    printf("After p2++: %p\n", p2);
    p2--;
    printf("After p2--: %p\n\n", p2);

    printf("Original p3 (char*): %p\n", p3);
    p3++;  // moves by 1 byte
    printf("After p3++: %p\n", p3);
    p3--;
    printf("After p3--: %p\n", p3);

    return 0;
}
