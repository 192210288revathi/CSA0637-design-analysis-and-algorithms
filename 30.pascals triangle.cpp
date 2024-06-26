#include <stdio.h>

int binomialCoefficient(int n, int k) {
    if (k == 0 || k == n)
        return 1;
    return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
}

void printPascalTriangle(int num_rows) {
    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j <= i; j++)
            printf("%d ", binomialCoefficient(i, j));
        printf("\n");
    }
}

int main() {
    int num_rows;

    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &num_rows);

    printf("\nPascal's Triangle:\n");
    printPascalTriangle(num_rows);

    return 0;
}

