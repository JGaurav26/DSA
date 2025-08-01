#include<stdio.h>
#include<stdlib.h>
<<<<<<< HEAD:Application_Programs/program169.c
//structure declaration
struct node
{
    int data;//4 bytes
    struct node *next; //8 bytes
=======

// structure declaration
struct node
{
    int data; // 4 bytes
    struct node *next; // 8 bytes
>>>>>>> bd130305ac6f0bc676494729ce2ec96fb12aacf8:Application Programs/program169.c
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

<<<<<<< HEAD:Application_Programs/program169.c
void InsertFirst(PPNODE Head, int iNo)
{
    //Step1: allocate memory dynamically for node
    PNODE newn = NULL;
    newn = malloc(sizeof(struct node));

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
=======
void InsertFirst(struct node ** Head, int iNo)
{
    // Step1 :: allocate memory dynamically for node
    PNODE newn = NULL; // Create a new node
    newn = malloc(sizeof(struct node)); // Allocate memory for the new node
    
    // Step2 :: initialize the node
    newn->data = iNo; // Assign data to the new node
    newn->next = NULL; // Initialize the next pointer to NULL
    
    // Step3 :: check wheter the linked list is empty or not
    if(*Head == NULL)
    {
        // LL is empty
        *Head = newn;

    }else{
        // LL is having atleast one node in it
        newn->next = *Head;
>>>>>>> bd130305ac6f0bc676494729ce2ec96fb12aacf8:Application Programs/program169.c
        *Head = newn;
    }

}

int main()
{
    struct node * First = NULL;
<<<<<<< HEAD:Application_Programs/program169.c
    InsertFirst(&First,10);
    InsertFirst(&First,20);
=======
    InsertFirst(&First, 10);
    InsertFirst(&First, 20);
>>>>>>> bd130305ac6f0bc676494729ce2ec96fb12aacf8:Application Programs/program169.c
    return 0;
}