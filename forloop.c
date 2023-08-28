#include <stdio.h>

int main() {
    int initial_prev = 0;
    int initial_num = 1;
    int upper_limit = 100000;

    for (int cur = initial_prev + initial_num; cur < upper_limit; cur = initial_prev + initial_num) {
        printf("%d\n", cur);
        initial_prev = initial_num;
        initial_num = cur;
    }

    return 0;
}