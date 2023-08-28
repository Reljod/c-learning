#include <stdio.h>

double get_circumference(float, double);

int main() {
    const double PI = 3.1415926536;

    printf("The current value of pi is %.10lf\n", PI);


    float radius = 12.0;
    double circum_val = get_circumference(radius, PI);

    printf(
        "Given pi is %.10lf and radius of %.4f, the circumference of circle is %.10lf\n",
        PI, radius, circum_val
    );

    return 0;
}

double get_circumference(float radius, double pi) {
    return pi * radius * radius;
}
