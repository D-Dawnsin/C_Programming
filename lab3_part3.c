#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NO  0 //NO will be replaced with 0
#define YES 1 //YES will be replaced with 1


main()
{
	int number;
	int guess_value = -1;
	int nbr_of_guesses = 0;
	int done = NO; //This variable can now be used like a Boolean. 


	srand((unsigned)time(NULL));
	number = rand() % 1000 + 1;

	while (done == NO)
	{
		printf("Pick a number between 0 and 1000: \n");
		scanf("%d", &guess_value);

		if (guess_value == number)
		{
			nbr_of_guesses += 1;
			printf("Congratulations! You guessed correctly in %d guesses! \n", nbr_of_guesses);
			printf("The number was %d\n", number);
			done = YES;
		}
		else if (guess_value > number)
		{
			nbr_of_guesses += 1;
			printf("You guessed high!\n");
		}
		else
		{
			nbr_of_guesses += 1;
			printf("You guessed low!\n");
		}
	}

}