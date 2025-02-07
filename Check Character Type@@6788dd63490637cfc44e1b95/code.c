#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    scanf("%c", &ch);

    // Check if the character is a digit
    if (isdigit(ch)) {
        printf("Digit\n");
    }
    // Check if the character is an alphabet
    else if (isalpha(ch)) {
        // Convert to lowercase to simplify checking
        char lower_ch = tolower(ch);
        if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch == 'o' || lower_ch == 'u') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    }
    // If not a digit or alphabet, it is a special character
    else {
        printf("Special Character\n");
    }

    return 0;
}
