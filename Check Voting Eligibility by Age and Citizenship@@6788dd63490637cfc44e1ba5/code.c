#include <stdio.h>

int main() {
    int age, citizen;
    
    // Read two space-separated integers
    scanf("%d %d", &age, &citizen);
    
    // Check voting eligibility
    if (age >= 18 && citizen == 1)
        printf("Eligible\n");
    else
        printf("Not Eligible\n");

    return 0;
}
