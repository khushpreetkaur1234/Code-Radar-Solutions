#include <stdio.h>

int main() {
    int num;
    
    // Read an integer input
    scanf("%d", &num);

    // Print hexadecimal and octal representations
    printf("Hexadecimal: %X\n", num); // %X for uppercase hexadecimal
    printf("Octal: %o\n", num);       // %o for octal

    return 0;
}
