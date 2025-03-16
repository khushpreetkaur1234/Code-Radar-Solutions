// Your code here...
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d", i);
        if (i < n) {
            printf(" ");  // Add a space between numbers except after the last one
        }
    }

    printf("\n"); // Move to the next line after the output
    return 0;
}
