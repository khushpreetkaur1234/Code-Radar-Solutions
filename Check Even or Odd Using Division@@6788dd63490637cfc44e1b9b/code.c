#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("Even\n");  // Number is divisible by 2 (Even)
    } else {
        printf("Odd\n");   // Number is not divisible by 2 (Odd)
    }

    return 0;
}
