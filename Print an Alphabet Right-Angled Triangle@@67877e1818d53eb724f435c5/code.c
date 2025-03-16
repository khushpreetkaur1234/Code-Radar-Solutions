// Your code here...
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Input the number of rows

    for(int i = 1; i <= N; i++) {
        // Print alphabets from 'A' up to the i-th character
        for(char ch = 'A'; ch < 'A' + i; ch++) {
            printf("%c ", ch);
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
