#include <stdio.h>
#include <string.h>

typedef unsigned int fact_inp;
typedef void (*plugin)(fact_inp n);

fact_inp recur_fact(fact_inp n);
fact_inp mem_dyn_fact(fact_inp n);
fact_inp mem_dyn_fact_impl(fact_inp n, fact_inp *dn);

int main() {
    fact_inp f_num = 10;

    printf("The factorial of %d is %d\n", f_num, recur_fact(f_num));
    printf("The factorial of %d is %d\n", f_num, mem_dyn_fact(f_num));
    return 0;
}

fact_inp recur_fact(fact_inp n) {
    if (n == 0) {
        return 1;
    }

    return n * recur_fact(n - 1);
}

fact_inp mem_dyn_fact(fact_inp n) {
    fact_inp dn[n + 1];
    memset(dn, -1, sizeof dn);

    return mem_dyn_fact_impl(n, &dn);
}

fact_inp mem_dyn_fact_impl(fact_inp n, fact_inp *dn) {
    if (n == 0){
        dn[n] = 1;
        return dn[n];
    }

    if (dn[n] != -1){
        return dn[n];
    }

    dn[n] = n * mem_dyn_fact_impl(n - 1, dn);
    return dn[n];
}