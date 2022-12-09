#include <stdio.h>

struct person {
	char* first_name;
	char* middle_initial;
	char* last_name;
};

int size(struct person full_name);

main()
{
	char fname[30]; 
	char minitial[30];
	char lname[30];

	int count;
		
	printf("Enter your first name: ");
	scanf("%s", &fname);

	printf("Enter your middle initial: ");
	scanf("%s", &minitial);

	printf("Enter your last name: ");
	scanf("%s", &lname);

	struct person user = {fname, minitial, lname};

	printf("Welcome %s %s. %s \n", user.first_name, user.middle_initial, user.last_name);

	count = size(user);

	printf("Your name is %d characters long.\n", count);
}

int size(struct person full_name)
{
	int size = 0;
	char* sp = full_name.first_name;

	while (*sp != '\0')
	{
		*sp++;
		size++;
	}

	sp = full_name.middle_initial;

	while (*sp != '\0')
	{
		*sp++;
		size++;
	}

	sp = full_name.last_name;

	while (*sp != '\0')
	{
		*sp++;
		size++;
	}

	return size;

}

