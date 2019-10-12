#include <stdio.h>

#define PI 3.1415926

int main(int argc, char const *argv[])
{
    double r;
    scanf("%lf", &r);
    double perimeter, area;
    perimeter = 2 * PI * r;
    area = PI * r * r;
    printf("The permiterer of the round is %.2f.\n", perimeter);
    printf("The area of the round is %.2f.\n", area);

    return 0;
}
