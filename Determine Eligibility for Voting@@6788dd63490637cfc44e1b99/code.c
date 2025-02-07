#include <stdio.h>

int main() {
    int age;
    scanf("%d", &age);

    if (age >= 18) {
        printf("Eligible\n");  // Age is 18 or above
    } else {
        printf("Not Eligible\n");  // Age is below 18
    }

    return 0;
}
