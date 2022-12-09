#include <stdio.h>

main()
{
	const int STUDENTS = 5;

	int grades[5];

	int i;

	for (i = 0; i < STUDENTS; i++)
	{
		int response;
		
		printf("Enter Person %d's grade: ", i+1);
		scanf("%d", &response);

		grades[i] = response;
	}

}


