#include <stdio.h>

int main() {
    char light;

    // Read the input character
    scanf(" %c", &light);

    // Determine the action based on traffic light input
    switch (light) {
        case 'R':
            printf("Stop\n");
            break;
        case 'G':
            printf("Go\n");
            break;
        case 'Y':
            printf("Slow Down\n");
            break;
        default:
            printf("Invalid input\n");
    }

    return 0;
}
