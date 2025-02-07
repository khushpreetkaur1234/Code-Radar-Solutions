#include <stdio.h>

int main() {
    int num1, num2;

    // Read two space-separated integers
    scanf("%d %d", &num1, &num2);

    // Check if both numbers are positive or both are negative
    if ((num1 > 0 && num2 > 0) || (num1 < 0 && num2 < 0))
        printf("Same Sign\n");
    else
        printf("Different Sign\n");

    return 0;
}
