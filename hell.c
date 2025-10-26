#include <stdio.h>

int main() {
    int i, j, k, n;

    printf("Enter number of branches and number of products: ");
    scanf("%d %d", &n, &k);

    int q1[n][k];
    int q2[n][k];
    int result[n][k];

    // Quarter 1 sales
    for (i = 0; i < n; i++) {
        printf("\nEnter sales for Quarter 1 - Branch %d:\n", i + 1);
        for (j = 0; j < k; j++) {
            scanf("%d", &q1[i][j]);
        }
    }

    // Quarter 2 sales
    for (i = 0; i < n; i++) {
        printf("\nEnter sales for Quarter 2 - Branch %d:\n", i + 1);
        for (j = 0; j < k; j++) {
            scanf("%d", &q2[i][j]);
        }
    }

    // Total sales
    printf("\n--- Total Sales of Quarter 1 and 2 ---\n");
    for (i = 0; i < n; i++) {
        printf("Branch %d:\n", i + 1);
        for (j = 0; j < k; j++) {
            result[i][j] = q1[i][j] + q2[i][j];
            printf("Product %d total: %d\n", j + 1, result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

