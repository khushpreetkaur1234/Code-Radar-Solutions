#include <stdio.h>

int main() {
    char name[1000] , hobby[1000];
    int age;
    scanf("%s %d ", &name , &age);
    scanf("%s", &hobby);
    printf("Name: %s" , name);
    printf("Age: %d" , age);
    printf("Hobby: %s" , hobby);
    return 0;
}