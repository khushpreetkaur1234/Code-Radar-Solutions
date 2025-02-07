#include <stdio.h>

int main() {
    int num, divisor;
    scanf("%d %d", &num, &divisor);

    if (num % divisor == 0) {
        printf("Yes\n");  // num is a multiple of divisor
    } else {
        printf("No\n");   // num is not a multiple of divisor
    }

    return 0;
}
