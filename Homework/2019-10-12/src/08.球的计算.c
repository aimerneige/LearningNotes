#include <stdio.h>

#define PI 3.1415926

int main(int argc, char const *argv[])
{
    printf("Please input the radius:");
    double r;
    scanf("%lf", &r);
    double surfaceArea, volume;
    surfaceArea = 4 * PI * r * r;
    volume = 4/3 * PI * r * r * r;
    printf("The area is %.2f.\n", surfaceArea);
    printf("The volume is %.2f.\n", volume);
    return 0;
}