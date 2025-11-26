#include <stdio.h>

void func() {
    int localVar = 5;   
    printf("Inside func: localVar = %d\n", localVar);
}

int main() {
    func();
    printf("Trying to access localVar from main:\n");
    return 0;
}
