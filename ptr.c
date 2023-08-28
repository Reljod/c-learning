#include <stdio.h>

int main() {

    int my_arr[7] = { 10, 60, 1, 2, 3, 0 };

    int *ptr_my_arr = &my_arr;

    printf("%d\n", *ptr_my_arr);
    printf("%d\n", *(ptr_my_arr+6));

    return 0;
}