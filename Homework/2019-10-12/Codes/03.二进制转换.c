#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    scanf("%d", &num);
    unsigned mask = 1u<<(sizeof(unsigned) * 8 - 1);
    for ( ; mask ; mask >>= 1) {
        printf("%d", (num & mask)?1:0);
    }
    printf("\n");
    return 0;
}