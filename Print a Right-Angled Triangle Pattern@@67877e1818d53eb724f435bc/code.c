// Your code here...#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Input the number of rows

    // Outer loop for rows
    for(int i = N; i >= 1; i--) {
        // Inner loop for printing stars
        for(int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
