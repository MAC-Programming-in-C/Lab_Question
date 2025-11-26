#include <stdio.h>

struct Employee {
    char name[50];
    float basic;
};

int main() {
    struct Employee emp[100];
    float da, gross;

    for(int i = 0; i < 100; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Basic Pay: ");
        scanf("%f", &emp[i].basic);
    }

    printf("\nEmployee Name\tGross Salary\n");
    printf("------------------------------------\n");

    for(int i = 0; i < 100; i++) {
        da = 0.52 * emp[i].basic;
        gross = emp[i].basic + da;

        printf("%s\t\t%.2f\n", emp[i].name, gross);
    }

    return 0;
}
