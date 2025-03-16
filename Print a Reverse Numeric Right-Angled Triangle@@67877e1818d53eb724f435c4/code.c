// Your code here...
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Input the number of rows

    for(int i = 1; i <= N; i++) {
        // Print numbers in reverse order
        for(int j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
