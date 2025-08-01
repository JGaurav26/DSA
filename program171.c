#include<stdio.h>
#include<stdlib.h>
<<<<<<< HEAD:Application_Programs/program171.c
//structure declaration
struct node
{
    int data;//4 bytes
    struct node *next; //8 bytes
};

=======

// structure declaration
struct node
{
    int data; // 4 bytes
    struct node *next; // 8 bytes (on a 64-bit system)
};

// Typedefs for convenience
>>>>>>> bd130305ac6f0bc676494729ce2ec96fb12aacf8:Application Programs/program171.c
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

<<<<<<< HEAD:Application_Programs/program171.c
void InsertFirst(PPNODE Head, int iNo)
{
    //Step1: allocate memory dynamically for node
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(struct node));

    //Step2: initiale the node
    newn->data=iNo;
    newn->next=NULL;

    //Step3: check whether LL is empty or not
    if(*Head==NULL) 
    {
    //LL is empty
    *Head=newn;
    } else {
        //LL is having at least one node in it
        newn->next =*Head;
        *Head = newn;
    }

}

void display(PNODE Head)
{
    printf("Linkedlist data elements are:\n");
    while(Head!=NULL)
    {
        printf("| %d |->",Head->data);
        Head = Head->next;
    }
    printf("NULL \n");
}
int count(PNODE Head)
{   int iCnt =0;
    while(Head!=NULL)
    {
       Head = Head->next;
       iCnt++;
    }
    return iCnt;
}
int main()
{
    struct node * First = NULL;
    InsertFirst(&First,10);
    InsertFirst(&First,20);
    InsertFirst(&First,30);
    InsertFirst(&First,40);
    InsertFirst(&First,50);
    display(First);
    int iRet = count(First);
    printf("Linkedlist has %d nodes\n",iRet);
=======
void InsertFirst(struct node ** Head, int iNo)
{
    // Step1 :: allocate memory dynamically for node
    PNODE newn = NULL; // Create a new node pointer
    newn = (PNODE)malloc(sizeof(NODE)); // Allocate memory for the new node

    // Check if memory allocation was successful
    if (newn == NULL)
    {
        printf("Memory allocation failed!\n");
        return;
    }
    
    // Step2 :: initialize the node
    newn->data = iNo; // Assign data to the new node
    newn->next = NULL; // Initialize the next pointer to NULL
    
    // Step3 :: check whether the linked list is empty or not and insert the node
    if(*Head == NULL)
    {
        // LL is empty, so the new node becomes the first node
        *Head = newn;
    } else {
        // LL is not empty, so new node points to the current first node
        newn->next = *Head;
        // And the new node becomes the new first node
        *Head = newn;
    }
}

// Function to display the linked list (added for testing)
void Display(PNODE Head)
{
    printf("Elements of the linked list are:\n");
    while(Head != NULL)
    {
        printf("|%d|-> ", Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int count(PNODE Head)
{
    int iCnt = 0;
    while(Head != NULL)
    {
        iCnt ++;
        Head = Head -> next;
    }
    return iCnt;
}

int main()
{
    struct node * First = NULL; // Initialize the Head pointer to NULL

    printf("Inserting 10 at the beginning:\n");
    InsertFirst(&First, 10);
    Display(First);

    printf("\nInserting 20 at the beginning:\n");
    InsertFirst(&First, 20);
    Display(First);

    printf("\nInserting 30 at the beginning:\n");
    InsertFirst(&First, 30);

    printf("Inserting 40 at the beginning:\n");
    InsertFirst(&First, 40);
    Display(First);

    printf("\nInserting 50 at the beginning:\n");
    InsertFirst(&First, 50);
    Display(First);

    printf("\nInserting 60 at the beginning:\n");
    InsertFirst(&First, 60);
    Display(First);
    
    int iRet = count(First);
    printf("LinkedList has %d nodes\n", iRet);
>>>>>>> bd130305ac6f0bc676494729ce2ec96fb12aacf8:Application Programs/program171.c
    return 0;
}