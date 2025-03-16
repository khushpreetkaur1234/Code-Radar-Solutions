// Your code here...
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Input the number of rows

    // Outer loop for rows
    for(int i = 1; i <= N; i++) {
        // Print spaces for mirroring effect
        for(int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Print stars
        for(int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
