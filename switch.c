#include <stdio.h>

int main() {
    char answer;

    printf("What's the capital of Philippines?\n");
    printf("a.) Cebu\t\tb.) Manila\n");
    printf("c.) Quezon city\t\td.) Davao city\n\n");
    printf("Answer: ");
    answer = getchar();

    switch (answer) {
        case 'a':
        case 'c':
        case 'd':
            printf("The answer is wrong\n");
            break;
        case 'b':
            printf("The answer is right\n");
            break;
        default:
            printf("The answer is invalid\n");
            break;
    }
}