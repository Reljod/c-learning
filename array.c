#include <stdio.h>

int main() {
    /* Evaluate a 5 item exam for 3 students
    */
    
    const char correct_ans[] = { 'd', 'b', 'c', 'a', 'a'};
    const char answers[3][5] = {
        { 'a',  'b', 'c', 'd', 'a' }, // student 1
        { 'd',  'b', 'a', 'a', 'a' }, // student 2
        { 'b',  'b', 'a', 'a', 'd' } // student 3
    };

    int scores[3];

    int i, j;
    for (i = 0; i < 3; i++) {
        int score = 0;
        for(j = 0; j < 5; j++) {
            if (answers[i][j] == correct_ans[j]) {
                score++;
            }
        }
        scores[i] = score;
    }

    // The answer should be: 3, 4, 2
    printf("The score of 3 students are %d, %d, %d\n", scores[0], scores[1], scores[2]);

    return 0;
}