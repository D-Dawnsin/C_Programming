#include <stdio.h>

main()
{
	int n;
	
	start: ;
		puts("Enter a number between 0 and 10: ");
		scanf("%d", &n);

		if (n < 0 || n > 10)
		{
			puts("That is not allowed");
			puts("Enter a number between 0 and 10: ");
			scanf("%d", &n);
		}

		else if (n == 0)
		{
			puts("You entered 0.\n");
		}

		else if (n == 1)
		{
			puts("You entered 1.\n");
		}

		else if (n >= 2 && n < 10)
		{
			puts("You entered something between 1 and 10.\n");
		}
}