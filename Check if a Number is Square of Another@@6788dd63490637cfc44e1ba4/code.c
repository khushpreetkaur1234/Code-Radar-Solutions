#include <stdio.h>

int main() {
    int a, b;
    
    // Read two space-separated integers
    scanf("%d %d", &a, &b);
    
    // Check if the first number is the square of the second
    if (a == b * b)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
