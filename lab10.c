#include <stdio.h>


struct Data {
    char name[20];
    struct Data* next;
};


main()
{
    typedef struct Data PERSON;

    // 3.  Declare head, new, and current pointers.
    PERSON* head = NULL;
    PERSON* new = NULL;
    PERSON* current = NULL;
    PERSON* temp = NULL;

    //Add to front
    new = (PERSON*)malloc(sizeof(PERSON));
    strcpy(new->name, "Abigail");

    //This makes the new node the head of the list (pushing to front of list)
    //Adds to the front of the list
    new->next = head; 
    head = new;
    

    //navigating list
    current = head;

    while (current != NULL)
    {
        printf("%s\n", current->name);
        current = current->next; //sets current to the next node in the list
    }

    /////////////////////////////Add to End of List//////////////////////////////////////////////////////////
   
    new = (PERSON*)malloc(sizeof(PERSON));
    strcpy(new->name, "Catherine");

    //Pushes new node to back of list
    current = head;
    while (current != NULL)
    {
        current = current->next; //sets current to the next node in the list
    }
    
    current-> next = new;
    new->next = NULL;

    printf("\n//////Second Iteration:\n\n");
    current = head;
    while (current != NULL)
    {
        printf("%s\n", current->name);
        current = current->next; //sets current to the next node in the list
    }

    
    
    /////////////////////////////Add to second position/////////////////////////////////////////////////////////////////////////
    
    new = (PERSON*)malloc(sizeof(PERSON));
    strcpy(new->name, "Beatrice");

    temp = head->next;
    
    head-> next = new;
    new->next = temp;


    printf("\n//////Third Iteration:\n\n");
    current = head;
    while (current != NULL)
    {
        printf("%s\n", current->name);
        current = current->next; //sets current to the next node in the list
    }

}

