#include <stdio.h>

int gcd(int a, int b) {
    if(b == 0) 
        return a;
    return gcd(b, a % b);
}

int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    printf("GCD(%d, %d) = %d\n", x, y, gcd(x, y));

    return 0;
}
