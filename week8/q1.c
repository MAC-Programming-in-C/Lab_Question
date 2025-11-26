#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'X';

    int *pInt = &a;
    float *pFloat = &b;
    char *pChar = &c;

    printf("----- Pointer Values and the Data They Point To -----\n");

    printf("Address stored in pInt: %p\n", pInt);
    printf("Value pointed by pInt: %d\n\n", *pInt);

    printf("Address stored in pFloat: %p\n", pFloat);
    printf("Value pointed by pFloat: %.2f\n\n", *pFloat);

    printf("Address stored in pChar: %p\n", pChar);
    printf("Value pointed by pChar: %c\n\n", *pChar);

    return 0;
}
