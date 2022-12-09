#include <stdio.h>

main()
{
	int x, y;

	printf("Enter a number for x: ");
	scanf("%d", &x);

	printf("Enter a number for y: ");
	scanf("%d", &y);

	if (x == y)
	{
		printf("a and y are equal");
	}
	else if (x > y)
	{
		printf("x is greater than y");
	}
	else
	{
		printf("x is less than y");
	}
}