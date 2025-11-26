#include <stdio.h>

int main() {
    int m, n, p, q;

    printf("Enter rows and columns of Matrix A (m n): ");
    scanf("%d %d", &m, &n);

    printf("Enter rows and columns of Matrix B (p q): ");
    scanf("%d %d", &p, &q);

    if(n != p) {
        printf("\nMatrix multiplication NOT possible.\n");
        printf("Columns of A (%d) != Rows of B (%d)\n", n, p);
        return 0;
    }

    int A[m][n], B[p][q], result[m][q];

    printf("\nEnter Matrix A elements (row-wise):\n");
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("\nEnter Matrix B elements (row-wise):\n");
    for(int i = 0; i < p; i++)
        for(int j = 0; j < q; j++)
            scanf("%d", &B[i][j]);

    // Initializing result matrix
    for(int i = 0; i < m; i++)
        for(int j = 0; j < q; j++)
            result[i][j] = 0;

    // Matrix Multiplication
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < q; j++) {
            for(int k = 0; k < n; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print Matrix A
    printf("\nMatrix A:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }

    // Print Matrix B
    printf("\nMatrix B:\n");
    for(int i = 0; i < p; i++) {
        for(int j = 0; j < q; j++)
            printf("%d ", B[i][j]);
        printf("\n");
    }

    // Print Result
    printf("\nResultant Matrix (A × B):\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < q; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }

    return 0;
}
