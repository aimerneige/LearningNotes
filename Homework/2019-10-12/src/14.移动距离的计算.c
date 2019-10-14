#include <stdio.h>

int main(int argc, char const *argv[])
{
    float v0, t, a, S;
    scanf("%f %f %f", &v0, &a, &t);
    S = v0 * t + 1.0/2.0 * a * t * t;
    printf("%.2f", S);

    return 0;
}