#include <stdio.h>

int main() {
    int day;
    
    // Read an integer input
    scanf("%d", &day);

    // Check and print the corresponding day
    switch(day) {
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        case 6: printf("Saturday\n"); break;
        case 7: printf("Sunday\n"); break;
        default: printf("Invalid\n"); // Handles cases where input is not in the range 1-7
    }

    return 0;
}
