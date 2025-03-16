// Your code here...
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Input the number of rows

    // Outer loop for rows
    for(int i = 1; i <= N; i++) {
        // Inner loop for printing numbers in each row
        for(int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
