#include <stdio.h>
void printRow(int n) {
    if (n == 0) 
        return;
    printRow(n - 1); 
    printf("%d ", n); 
}
void printPattern(int rows, int currentRow) {
    if (currentRow > rows) 
        return;
    for (int i = 0; i < rows - currentRow; i++) {
        printf("  ");
    }
    printRow(currentRow);
    printf("\n");
    printPattern(rows, currentRow + 1);
}

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Pattern:\n");
    printPattern(rows, 1);
    return 0;
}

