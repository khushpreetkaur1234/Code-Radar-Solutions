// Your code here...
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Input the number of rows

    for(int i = 1; i <= N; i++) {
        // Print spaces to center the numbers
        for(int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        
        // Print numbers in increasing order
        for(int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        printf("\n");  // Move to the next line
    }

    return 0;
}
