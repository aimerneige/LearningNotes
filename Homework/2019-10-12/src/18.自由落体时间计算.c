#include <stdio.h>
#include <math.h>

#define g 9.8

int main(int argc, char const *argv[])
{
    float h, t;
    scanf("%f", &h);
    t = sqrt(2 * h / g);
    printf("%.2f", t);

    return 0;
}