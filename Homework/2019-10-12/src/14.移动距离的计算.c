#include <stdio.h>

int main(int argc, char const *argv[])
{
    double v, t, a, x;
    scanf("%lf %lf %lf", &v, &t, &a);
    x = v * t + 1/2 * a * t * t;
    printf("%.2f", x);

    return 0;
}
