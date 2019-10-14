#include <stdio.h>

int main(int argc, char const *argv[]) {
    int num, ret = 0;
    for (int i = 0; i < 3; i++) {
        scanf("%d", &num);
        ret += num;
    }
    printf("%d", ret);
    return 0;
}