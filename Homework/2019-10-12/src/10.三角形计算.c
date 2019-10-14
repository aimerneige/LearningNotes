#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float a, b, c;
    double p, area;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("These sides do not correspond to a triangle.\n");
        return 0;
    }
    p = (a + b + c) / 2.0;
    area = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("%.2f", area);
    return 0;
}