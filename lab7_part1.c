#include <string.h>
#include <stdio.h>

main()
{
	char input[6]; //does not have a string variable so have to use char variable with length of char []

	printf("Please enter a string: ");

	fgets(input, 10, stdin); //Arguments are char variable, max int length of char, stream (keyboard = stdin)

	printf("Your string is: ");
	puts(input); //Argument is your char variable
}