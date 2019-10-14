#include <stdio.h>

int main(int argc, char const *argv[])
{
    int money;
    scanf("%d", &money);
    int Money[6] = {100, 50, 20, 10, 5, 1};
    int i, ret;
    for (i = 0; i < 6; i++) {
        ret = money / Money[i];
        printf("%d\n", ret);
        money %= Money[i];
    }
    return 0;
}