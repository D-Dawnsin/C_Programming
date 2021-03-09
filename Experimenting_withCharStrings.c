#include <stdio.h>

void string_printer(char string[]);
void string_counter(char string[]);

main()
{
	// you have to leave a blank space for the null terminator
	char string1[9] = "Ilovedog"; //use double quotations for string characters
	char string2[10] = "FlyLikeDu";
	char string3[8] = "Pokemon";
	char string4[6] = "Tsuki";

	char emptyString[] = "";

	printf("String 1 contains: %s \n", string1); //need to use string specifier because want to print as a string
	printf("String 2 contains: %s \n", string2);
	printf("String 3 contains: %s \n", string3);
	printf("String 4 contains: %s \n", string4);

	printf("Empty String contains: %s \n", emptyString);

	printf("----------Using the string function----------\n"); //just to space out while loop from other print statements

	string_printer(string1);
	string_printer(string2);
	string_printer(string3);
	string_printer(string4);
	string_printer(emptyString);

	printf("----------Using the counting function----------\n"); //just to space out while loop from other print statements

	string_counter(string1);
	string_counter(string2);
	string_counter(string3);
	string_counter(string4);
	string_counter(emptyString);

}

void string_printer(char string[])
{
	char* sp; //pointer
	sp = string;

	printf("Your string contains: ");

	while (*sp != '\0')
	{
		printf("%c", *sp);
		*sp++;
	}

	printf("\n");
}

void string_counter(char string[])
{
	char* sp; //pointer
	sp = string;

	int count = 0;

	while (*sp != '\0')
	{
		*sp++;
		count++;
	}
		
	if (string[0] != '\0') // This adds one to the count to account for the null terminator unless the string is empty
	{
		count += 1;
	}

	printf("Your string is %d characters long\n", count);
}
