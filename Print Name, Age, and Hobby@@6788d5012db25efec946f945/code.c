#include <stdio.h>

int main() {
    char name[1000] , hobby[1000];
    int age;
    scanf("%s %d " , &name , &age);
    scanf("%d" , &age);
    printf("Name: %s/n" , name);
    printf("Age: %d/n" , age);
    printf("Hobby : %s" , hobby);
    return 0;
}