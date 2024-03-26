#include <stdio.h>

// Function to print the pattern
void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

int main() {
    int n = 4; // Define n as 4
    printf("Pattern for n=4:\n");
    printPattern(n);
    return 0;
}

