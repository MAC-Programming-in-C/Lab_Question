#include <stdio.h>

int fibo(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibo(n - 1) + fibo(n - 2);
}

int main() {
    int num;
    printf("Enter how many Fibonacci numbers: ");
    scanf("%d", &num);

    printf("Fibonacci sequence:\n");
    for(int i = 0; i < num; i++)
        printf("%d ", fibo(i));

    return 0;
}
