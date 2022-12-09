#include <stdio.h>
#include <stdlib.h>

char* mystrcopy(char str1[], char str_copy[]);
char* mystrcat(char str1[], char str2[], char str_cat[]);

main()
{
    	char count, *ptr, *p; //A loop counter and two pointers

        char block[35];
        ptr = block; //storing address in ptr

        if (sizeof(block) != 0)
        {
            printf("The number of bytes needed is %d bytes\n", sizeof(block)); // 35 bytes needed
        }
        else
            exit(0);

        count = 65;
        p = ptr; //sets the second pointer to the beginning of the string

        // assigning the values in the block string with pointers
        for (int i = 0; i < 26; i++)
        {
            *p = count; //Quite literally assigning the address of the position to what count is
            *p++;
            count++;
        }
        
        printf("The string is: ");
        //printing out the string
        for (int i = 0; i < strlen(block)-1; i++)
        {
            printf("%c", block[i]);
        }

        printf("\n\n");
        printf("//////////////////////////////////////////////////////////");
        printf("\n\n");
        //////////////////////////////////////////////////////////
        char str[25], str_copy[50];
        char *strpt_copy;
        int i;

        printf("Please enter the string you want to copy: ");
        fgets(str, 25, stdin);

        strpt_copy = mystrcopy(str, str_copy);

        printf("Your String: ");
        for (i = 0; i < strlen(str) - 1; i++)
        {
            printf("%c", str[i]);
        }

        printf("\n");

        printf("Copied String: ");
        printf("%s", strpt_copy);

        printf("\n\n");
        printf("//////////////////////////////////////////////////////////");
        printf("\n\n");
        //////////////////////////////////////////////////////////
        char first_str[25], second_str[25], str_cat[50];
        char* strpt_cat;
        int j;

        printf("Please enter your first string: ");
        fgets(first_str, 25, stdin);
        printf("Please enter your second string: ");
        fgets(second_str, 25, stdin);

        strpt_cat = mystrcat(first_str, second_str, str_cat);

        printf("First String: ");
        for (j = 0; j < strlen(first_str) - 1; j++)
        {
            printf("%c", first_str[j]);
        }

        printf("\n");

        printf("Second String: ");
        for (j = 0; j < strlen(second_str) - 1; j++)
        {
            printf("%c", second_str[j]);
        }

        printf("\n");

        printf("Combined String: ");
        // String cat
        printf("%s", strpt_cat);
}

char* mystrcopy(char str1[], char copy[])
{
    char* copypt;
    int i;

    copypt = (char*)malloc(sizeof(str1));

    for (i = 0; i < strlen(str1) - 1; i++) 
    {
        copy[i] = str1[i];
    }

    copypt = copy;
    return copypt;
}

char* mystrcat(char str1[], char str2[], char str_cat[])
{
    char* cat;
    int i;
    int j = 0;

    cat = (char*)malloc(sizeof(str1) + sizeof(str2));

    for (i = 0; i < strlen(str1) - 1; i++)
    {
        str_cat[j] = str1[i];
        j++;
    }

    for (i = 0; i < strlen(str2) - 1; i++)
    {
        str_cat[j] = str2[i];
        j++;
    }

    cat = str_cat;
    return cat;
}
