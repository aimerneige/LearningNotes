#include <stdio.h>

int main(int argc, char const *argv[])
{
	char srt, ret;
	int det = 'a' - 'A';
	scanf("%c", &srt);
	if ( srt <= 'z' && srt >= 'a') {
		ret = srt - det;
	}
	else if ( srt <= 'Z' && srt >= 'A' ) {
		ret = srt + det;
	}
	printf("%c\n", ret);
	return 0;
}