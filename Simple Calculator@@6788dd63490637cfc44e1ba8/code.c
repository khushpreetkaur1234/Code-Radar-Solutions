#include <stdio.h>

int main() {
    int num1, num2;
    char op;
    
    // Read two integers and an operator
    scanf("%d %d %c", &num1, &num2, &op);

    // Perform operation based on the operator
    switch(op) {
        case '+': 
            printf("%d\n", num1 + num2);
            break;
        case '-': 
            printf("%d\n", num1 - num2);
            break;
        case '*': 
            printf("%d\n", num1 * num2);
            break;
        case '/': 
            if (num2 == 0) 
                printf("Error\n"); // Handle division by zero
            else
                printf("%d\n", num1 / num2);
            break;
        default: 
            printf("Error\n"); // Handle invalid operator
    }

    return 0;
}
