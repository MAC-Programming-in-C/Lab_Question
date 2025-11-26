#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("output.txt", "r");   // open file in read mode

    if(fp == NULL) {
        printf("File not found!\n");
        return 1;
    }

    printf("Reading file character by character:\n");

    while((ch = fgetc(fp)) != EOF) {
        putchar(ch);  // print each character
    }

    fclose(fp);
    return 0;
}
