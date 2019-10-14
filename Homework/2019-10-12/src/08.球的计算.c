#include <stdio.h>

#define PI 3.1415926

int main(int argc, char const *argv[])
{
    float r;
    scanf("%f", &r);
    double surfaceArea, volume;
    surfaceArea = 4 * PI * r * r;
    volume = 4.0/3.0 * PI * r * r * r;
    printf("%.2f %.2f", surfaceArea, volume);
    return 0;
}