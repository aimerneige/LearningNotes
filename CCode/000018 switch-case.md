# Switch-Case

## Code

```C
#include <stdio.h>

int main(void)
{
	int x;

	printf("Please input a number.(Only 1,2,3,4,5 can be use.)\n");
	scanf_s("%d", &x);

	switch (x) {
          case 1:
		printf("fx=5\n");
		break;
	case 2:
		printf("fx=4\n");
		break;
	case 3:
		printf("fx=3\n");
		break;
	case 4:
		printf("fx=2\n");
		break;
	case 5:
		printf("fx=1\n");
		break;
	default:
		printf("You input a wrong number.\n");
	}
	
	return 0;
}
```

## Input

`4`

## Print

`fx=2`

## Exercise

None

## More

None
