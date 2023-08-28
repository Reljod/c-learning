#include <stdio.h>

typedef void (*apply_curr_num)(int);

void run_fibonnaci(int, int, int);
int compute_next_number(int, int, int, apply_curr_num);
void print_number(int);

int main() {
    int prev = 0;
    int curr = 1;
    int u_limit = 100000000;

    run_fibonnaci(prev, curr, u_limit);

    return 0;
}

void run_fibonnaci(int prev, int curr, int u_limit){
    apply_curr_num func = &print_number;
    compute_next_number(prev, curr, u_limit, func);
}

void print_number(int num) {
    printf("%d\n", num);
}

int compute_next_number(int prev, int curr, int u_limit, apply_curr_num func) {
    func(curr);
    if (prev + curr < u_limit) {
        return compute_next_number(curr, prev + curr, u_limit, func);
    } else {
        return curr;
    }
    
}