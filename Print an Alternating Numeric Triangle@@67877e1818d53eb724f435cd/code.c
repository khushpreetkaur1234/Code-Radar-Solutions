// Your code here...
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Input the number of rows

    for(int i = 1; i <= N; i++) {
        int start = (i % 2 == 1) ? 1 : 0;  // Start with 1 if odd row, 0 if even row
        for(int j = 1; j <= i; j++) {
            printf("%d ", start);
            start = 1 - start;  // Alternate between 1 and 0
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
