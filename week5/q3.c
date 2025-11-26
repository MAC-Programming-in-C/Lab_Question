#include <stdio.h>

int main() {
    int n, target, freq = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the number to find frequency: ");
    scanf("%d", &target);

    for(int i = 0; i < n; i++) {
        if(arr[i] == target)
            freq++;
    }

    printf("Frequency of %d is: %d\n", target, freq);

    return 0;
}
