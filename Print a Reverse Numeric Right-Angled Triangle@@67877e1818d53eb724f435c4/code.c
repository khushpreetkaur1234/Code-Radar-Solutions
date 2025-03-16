#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Input the number of rows

    for(int i = N; i >= 1; i--) {
        // Print numbers starting from 1 up to the current row number
        for(int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
