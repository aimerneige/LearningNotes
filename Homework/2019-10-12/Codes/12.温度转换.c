#include <stdio.h>

enum Temperature {
    C, F
} tpr;

int main(int argc, char const *argv[])
{
    char t[32];
    printf("Please input the temperature.\n"
            "For example: \"32C\" or \"78F\".\n");
    scanf("%s", t);
    double srt, ret;
    int i, j;
    for (i = 0; t[i] >= '0' && t[i] <= '9'; i++);
    srt = t[i - 1];
    for (j = i - 2; j >= 0; j--) {
        srt *= 10;
        srt += t[j];
    }
    if ( t[i] == 'C' ) {
        ret = srt + 32 * 1.8;
        tpr = C;
    }
    else if ( t[i] == 'F' ) {
        ret = (srt - 32) / 1.8;
        tpr = F;
    }
    printf("%.2f");
    if (tpr == F) {
        printf("C\n");
    }
    else if (tpr == C) {
        printf("F\n");
    }

    return 0;
}
