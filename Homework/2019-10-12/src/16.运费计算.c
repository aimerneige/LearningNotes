#include <stdio.h>

int main(int argc, char const *argv[])
{
    int p, w, s;
    double d;
    double f;
    scanf("%d %d %d %lf", &p, &w, &s, &d);
    f = p * w * s * (1 - d);
    printf("%.3f", f);

    return 0;
}