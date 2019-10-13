#include <stdio.h>

int main(int argc, char const *argv[])
{
	char str, ret, x;
	int delta;
	delta = 'a' - 'A';
	scanf("%c", &str);
	ret = str + delta;
	x = ret + 1;
	printf("%c%c", ret, x);
	return 0;
}