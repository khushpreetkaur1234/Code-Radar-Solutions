#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Input the number of rows

    for(int i = N; i >= 1; i--) {
        for(char ch = 'A'; ch < 'A' + i; ch++) {
            printf("%c ", ch);
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
