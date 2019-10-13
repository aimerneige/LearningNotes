#include <stdio.h>

int main() {
    int num, ret = 0;
    scanf("%d", &num);
    while ( num ) {
        ret += (num % 10);
        num /= 10;
    }
    printf("%d", ret);
    return 0;
}