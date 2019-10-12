#include <stdio.h>

#define PI 3.1415926

int main(int argc, char const *argv[])
{
    double r, h;
    scanf("%lf %lf", &r, &h);
    double COR;
    COR = 2 * PI * r;
    double SOR;
    SOR = PI * r * r;
    double SOB;
    SOB = 4 * PI * r * r;
    double VOB;
    VOB = 4 / 3 * PI * r * r * r;
    double VOC;
    VOC = SOR * h;
    printf("The perimeter of the round is %.2f.\n", COR);
    printf("The area of the round is %.2f.\n", SOR);
    printf("The area of the ball is %.2f.\n", SOB);
    printf("The volume of the ball is %.2f.\n", VOB);
    printf("The volume of the column is %.2f.\n", VOC);

    return 0;
}