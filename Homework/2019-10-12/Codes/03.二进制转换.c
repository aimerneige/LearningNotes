#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, i;
    scanf("%d", &num);
    unsigned mask = 1u<<(sizeof(unsigned) * 8 - 1);
    for (i = 0; mask ; mask >>= 1, i++) {
        if (i > ((sizeof(unsigned) * 8 - 1) - 8))
            printf("%d", (num & mask)?1:0);
    }
    printf("\n");
    return 0;
}