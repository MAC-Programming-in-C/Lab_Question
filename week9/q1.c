#include <stdio.h>

int main() {
    FILE *fp;
    char text[200];

    fp = fopen("output.txt", "w");   // create and open file in write mode

    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text to write into file: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);  // write text into file

    fclose(fp);
    printf("File created and text written successfully.\n");

    return 0;
}
