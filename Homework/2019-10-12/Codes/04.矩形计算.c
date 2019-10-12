#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x, y;
    int area;
    scanf("%d %d", &x, &y);
    area = x * y;
    printf("The area is %d.", area);
    return 0;
}