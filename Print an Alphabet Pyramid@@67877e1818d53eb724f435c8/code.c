// Your code here...
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Input the number of rows

    for(int i = 1; i <= N; i++) {
        // Print spaces to center the pyramid
        for(int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        
        // Print alphabets starting from 'A'
        for(char ch = 'A'; ch < 'A' + i; ch++) {
            printf("%c ", ch);
        }

        printf("\n");  // Move to the next line
    }

    return 0;
}
