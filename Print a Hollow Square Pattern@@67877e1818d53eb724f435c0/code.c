// Your code here...
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Input the side length of the square

    // Outer loop for rows
    for(int i = 1; i <= N; i++) {
        // Inner loop for columns
        for(int j = 1; j <= N; j++) {
            // Print '*' for the boundary conditions
            if(i == 1 || i == N || j == 1 || j == N) {
                printf("*");
            } else {
                printf(" ");  // Hollow space inside
            }
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
