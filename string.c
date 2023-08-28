#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

char original_word[20] = "thing";
int unallowed_pos[20] = { 3, 5 };
int unallowed_pos_num = 2;

bool check_pos_allowed(int pos) {
    if (isalpha(pos) ||  pos < 1 || pos > 5) {
        return false;
    }

    for (int i = 0; i < unallowed_pos_num; i++){
        if (unallowed_pos[i] == pos) {
            return false;
        }
    }
    return true;
}

int main() {
    char word[20] = "__i_g";

    printf("Guess the word: %s\n", word);

    char char_guess;
    int pos_guess;
    char guessed_string[20];

    bool success = false;
    while(!success) {
        printf("Which character to replace? (1-5): ");
        scanf("%d", &pos_guess);
        printf("\n");
        fflush(stdin);

        if (!check_pos_allowed(pos_guess)) {
            printf("Position %d is not allowed\n", pos_guess);
            continue;
        }

        unallowed_pos[unallowed_pos_num] = pos_guess;
        unallowed_pos_num++;

        printf("What character to replace? (a-z): ");
        char_guess = getchar();
        printf("\n");
        fflush(stdin);
        
        word[pos_guess - 1] = char_guess;
        printf("The current word is %s\n", word);

        printf("Do you want to guess the word? (y/n): ");
        char is_guessing = getchar();
        printf("\n");

        if (is_guessing != 'y') {
            continue;
        }

        printf("What's the word? ");
        scanf("%s", guessed_string);

        if (strcmp(original_word, guessed_string) == 0) {
            printf("Congrats you guess the word, %s\n", original_word);
            success = true;
        } else {
            printf("That's not right. Please try again.\n");
        }
    }

    return 0;
}

