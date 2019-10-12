#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    double s, area, perimeter;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("These sides do not correspond to a triangle.\n");
        return 0;
    }
    s = (a + b + c) / 2.0;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    perimeter = a + b + c;
    printf("area = %.2f.\nperimeter = %.2f.\n", area, perimeter);
    return 0;
}
