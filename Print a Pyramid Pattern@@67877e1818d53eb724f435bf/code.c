// Your code here...
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Input the number of rows

    // Outer loop for rows
    for(int i = 1; i <= N; i++) {
        // Printing spaces for pyramid alignment
        for(int j = 1; j <= N - i; j++) {
            printf(" ");
        }

        // Printing stars for the pyramid pattern
        for(int k = 1; k <= (2 * i) - 1; k++) {
            printf("*");
        }

        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
