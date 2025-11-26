#include <stdio.h>


long long factRec(int n) {
    if(n == 0) return 1;
    return n * factRec(n - 1);
}

long long factNonRec(int n) {
    long long f = 1;
    for(int i = 1; i <= n; i++)
        f *= i;
    return f;
}


long long binomial(int n, int r) {
    long long num = factRec(n);
    long long den = factRec(r) * factRec(n - r);
    return num / den;
}

int main() {
    int n, r;

    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);

    if(r > n || n < 0 || r < 0) {
        printf("Invalid input: r must be <= n\n");
        return 0;
    }

    printf("\nFactorial using recursion: %lld\n", factRec(n));
    printf("Factorial using non-recursion: %lld\n", factNonRec(n));

    printf("\nBinomial Coefficient C(%d, %d) = %lld\n", 
           n, r, binomial(n, r));

    printf("\nTable of C(n, r) for r = 0 to n:\n");
    for(int i = 0; i <= n; i++) {
        printf("C(%d, %d) = %lld\n", n, i, binomial(n, i));
    }

    return 0;
}
