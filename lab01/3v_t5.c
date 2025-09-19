#include <stdio.h>
#include <math.h>

int main(void) {
    double x;
    scanf("%lf", &x);

    double A = 2*(( cos(3*x)) / sin(3*x)) - (log(cos(x)) /log(1+ x*x));
    double B = (exp(x) - x -2 + pow(1+x, x));

    printf("%+.5f\n", A);
    printf("%+.5e\n", B);

    return 0;
}

