#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double a, b, c;
    double x1, x2;
    scanf("%lf %lf %lf", &a, &b, &c);
    double delta;
    delta = b * b - 4 * a * c;
    x1 = ( -b + sqrt(delta) ) / 2 * a;
    x2 = ( -b - sqrt(delta) ) / 2 * a;
    printf("%.2f %.2f", x1, x2);

    return 0;
}