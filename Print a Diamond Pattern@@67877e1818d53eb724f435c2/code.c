// Your code here...
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Input the number of rows in the top half

    // Upper half of the diamond (including the middle row)
    for(int i = 1; i <= N; i++) {
        // Print spaces
        for(int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Print stars
        for(int j = 1; j <= (2 * i) - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the diamond
    for(i
