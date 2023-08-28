#include <stdio.h>

void run_fibonnaci(int, int, int);
int compute_next_number(int, int, int);

int main() {
    int prev = 0;
    int curr = 1;
    int u_limit = 100000000;

    run_fibonnaci(prev, curr, u_limit);

    return 0;
}

void run_fibonnaci(int prev, int curr, int u_limit){
    compute_next_number(prev, curr, u_limit);
}

int compute_next_number(int prev, int curr, int u_limit) {
    printf("%d\n", curr);
    if (prev + curr < u_limit) {
        return compute_next_number(curr, prev + curr, u_limit);
    } else {
        return curr;
    }
    
}