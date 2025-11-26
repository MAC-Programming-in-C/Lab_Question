#include <stdio.h>

int globalVar = 10;   

void func1() {
    printf("func1: globalVar = %d\n", globalVar);
}

void func2() {
    globalVar = 20;    
    printf("func2: globalVar = %d\n", globalVar);
}

int main() {
    printf("main: globalVar = %d\n", globalVar);
    func1();
    func2();
    func1();   
    return 0;
}
