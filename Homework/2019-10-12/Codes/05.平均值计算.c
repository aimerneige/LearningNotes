#include <stdio.h>

int main(void)
{
	int x = 0;
	int sum = 0;
	int n = 0;
	double average = 0;

	printf("Please input the value of the x (integer).\nInput q to exit.\n");

	while ( scanf("%d", &x) == 1 ) {
		sum = sum + x;
		n = n + 1;
	}

	average = sum / n;

	printf("The average of all the %d numbers is %.2f.\n", n, average);

	return 0;
}