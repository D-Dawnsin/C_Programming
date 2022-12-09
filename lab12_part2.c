#include <stdio.h>

main()
{
	int x;
	printf("Printing only the even numbers from 1 to 10\n");
	for (x = 1; x <= 10; x++)
	{
		if (x % 2 == 0) //Number is not even
			printf("\n%d", x); //Go to x++
	}

}