#include <stdio.h>

int main() {
    int a = 12;   
    int b = 5;    

    printf("a = %d, b = %d\n", a, b);

    printf("Bitwise AND (a & b) = %d\n", a & b);     
    printf("Bitwise OR  (a | b) = %d\n", a | b);     
    printf("Bitwise NOT (~a)   = %d\n", ~a);         

    return 0;
}
