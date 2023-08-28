#include <stdio.h>

int main() {
    printf("Start a program\n\n");

    int age;

    printf("Tell me your age: ");
    scanf("%d", &age);
    printf("You entered %d", age);

    getchar();

    return 0;
}