#include <stdio.h>

#define PI 3.1415926

int main(int argc, char const *argv[])
{
    float r;
    scanf("%f", &r);
    double perimeter, area;
    perimeter = 2 * PI * r;
    area = PI * r * r;
    printf("%.2f %.2f", perimeter, area);

    return 0;
}