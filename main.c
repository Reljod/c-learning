#include <stdio.h>

int main() {
    int score = 83;
    float gpa = 1.75;
    char grade = 'A';

    printf(
        "A student scores %d in an exam.\nAn okay score for someone with gpa of %f and grade %c\n",
        score, gpa, grade
    );

    int score1, score2, score3;

    score1 = score + 1;
    score2 = score - 1;
    score3 = score - 2;

    printf(
        "A three different scores, (%d, %d, %d) were derived from the first score: %d\n",
        score1, score2, score3, score
    );

    return 0;
}