// Your code here...
#include <stdio.h>

int main() {
    int N, num = 1;
    scanf("%d", &N);  // Input the number of rows

    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
