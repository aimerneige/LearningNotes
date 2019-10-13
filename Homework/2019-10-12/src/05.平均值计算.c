#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x = 0;
	int sum = 0;
	int n = 0;
	int cnt = 0;
	double average = 0;

	for (n = 0; n < 3; n++) {
		scanf("%d", &x);
		sum += x;
	}

	average = sum / n;

	printf("%.2f", average);

	return 0;
}