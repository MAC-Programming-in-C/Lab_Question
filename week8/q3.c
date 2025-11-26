#include <stdio.h>

void modifyValues(int *a, float *b) {
    *a = *a + 10;    
    *b = *b * 2;     
}

int main() {
    int num = 5;
    float val = 3.5;

    printf("Before function call: num = %d, val = %.2f\n", num, val);

    modifyValues(&num, &val);   

    printf("After function call: num = %d, val = %.2f\n", num, val);

    return 0;
}
