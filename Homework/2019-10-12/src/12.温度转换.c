#include <stdio.h>

int main(int argc, char const *argv[])
{
    float F, C;
    scanf("%f", &F);
    C = 5.0/9.0 * (F - 32);
    printf("%.2f", C);

    return 0;
}