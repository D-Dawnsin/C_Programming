#include <stdio.h>
#include <stdlib.h> //malloc() lives here

main()
{
    //allocate memory for a 100-character string
    char *str;

    str = "The boy lived on";

    if ((str=(char *)malloc(100))== NULL)
    {
        puts("Not enough memory in the buffer\n");
        exit(1);
    }
    puts("String was allocated!\n");
}
