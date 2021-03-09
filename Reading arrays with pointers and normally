#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int largest(int *x, int y);
int smallest(int x[]);

main()
{
    int number, i;

    const int MAX = 6;
    int array[6], count;

    srand((unsigned)time(NULL));

    for (i = 0; i < MAX; i++)
    {
        number = rand() % 10 + 1; //generates a random number from 1-10
        array[i] = number;
    }

    array[MAX-1] = 0; //assigning last element of array to 0

    printf("The largest number in the array is: %d\n", largest(array, MAX));

    printf("The smallest number in the array is: %d\n", smallest(array));

	//Prints out the array to check function and array
    for (i = 0; i < MAX; i++)
    {
        printf("Position %d is %d\n", i + 1, array[i]);
    }
}

int largest(int *x, int y)
{
    int count;
    int biggest = x[0];
    
    for (count = 0; count < y-1; count++)
    {
    
        if (*x > biggest)
        {
            biggest = *x; //the * makes it so that it is assigning the values at the address not the address
        }
        
        x++; //the ++ just means to move to the next location (the next address)
    }
    
    return biggest;
}

int smallest(int x[])
{
    int count;
    int smallest = x[0];

    for (count = 0; x[count] != 0; count++)
    {
        if (x[count] < smallest)
        {
            smallest = x[count];
        }
    }

    return smallest;
}

