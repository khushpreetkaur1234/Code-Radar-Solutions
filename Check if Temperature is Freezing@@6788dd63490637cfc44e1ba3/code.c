#include <stdio.h>

int main() {
    int temperature;

    // Read an integer input for temperature
    scanf("%d", &temperature);

    // Check if the temperature is freezing (0 or below)
    if (temperature <= 0)
        printf("Freezing\n");
    else
        printf("Above Freezing\n");

    return 0;
}
