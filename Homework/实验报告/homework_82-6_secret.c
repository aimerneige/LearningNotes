#include <stdio.h>

int main(int argc, char const *argv[])
{
    char c1 = 'C';
    char c2 = 'h';
    char c3 = 'i';
    char c4 = 'n';
    char c5 = 'a';

    c1 += 4;
    c2 += 4;
    c3 += 4;
    c4 += 4;
    c5 += 4;

    putchar(c1);
    putchar(c2);
    putchar(c3);
    putchar(c4);
    putchar(c5);

    printf("%c", c1);
    printf("%c", c2);
    printf("%c", c3);
    printf("%c", c4);
    printf("%c", c5);

    return 0;
}