#include <stdio.h>
#include <string.h>

union Address {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[10];
};

int main() {
    union Address addr;

    printf("Enter present address: ");
    fgets(addr.home_address, sizeof(addr.home_address), stdin);

    printf("\nYour Present Address:\n");
    printf("%s", addr.home_address);

    return 0;
}
