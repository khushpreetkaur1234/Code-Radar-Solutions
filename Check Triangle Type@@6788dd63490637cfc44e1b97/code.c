#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) {
        printf("Equilateral\n");  // All sides are equal
    } else if (a == b || b == c || a == c) {
        printf("Isosceles\n");    // Any two sides are equal
    } else {
        printf("Scalene\n");      // All sides are different
    }

    return 0;
}
