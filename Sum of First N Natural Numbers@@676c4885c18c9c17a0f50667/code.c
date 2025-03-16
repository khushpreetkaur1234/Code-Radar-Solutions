// Your code here...
#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i;  // Add each number to the sum
    }

    printf("%d\n", sum); // Output the total sum
    return 0;
}
