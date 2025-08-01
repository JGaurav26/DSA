#include<stdio.h>
#include<stdlib.h>
<<<<<<< HEAD:Application_Programs/program180.c
//structure declaration
struct node
{
    
    int data;
    struct node *next;
    struct node *previous; //#

=======


struct node
{
    int data;
    struct node *next;
    struct node *previous; // #
>>>>>>> bd130305ac6f0bc676494729ce2ec96fb12aacf8:Application Programs/program180.c
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

<<<<<<< HEAD:Application_Programs/program180.c
void InsertFirst(PPNODE Head, int iNo){
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    
    newn->data=iNo;
    newn->next = NULL;
    newn->previous =NULL; //#

    if(*Head==NULL) //LL is Empty
    {
        *Head = newn;
    }
    else {
        //LL is not empty
        (*Head)->previous = newn; //#
        newn->next =*Head;
        *Head = newn;
    }



}
void InsertLast(PPNODE Head, int iNo){}
void InsertAtLoc(PPNODE Head, int iNo, int iLoc){}

void DeleteFirst(PPNODE Head){}
void DeleteLast(PPNODE Head){}
void DeleteAtLoc(PPNODE Head,int iLoc){}

void display(PNODE Head){}
int count (PNODE Head){return 0;}

=======
void InsertFirst(PPNODE Head, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = iNo;
    newn -> next = NULL;
    newn -> previous = NULL; // #

    if(*Head == NULL)
    {
        *Head = newn; // LL is empty
    }
    else{
        // LL is not empty
        (*Head) -> previous = newn; // #
        newn -> next = *Head;
        *Head = newn;
    }
}

void InsertLast(PPNODE Head, int iNo)
{
    
}

void InsertAtLoc(PPNODE Head, int iNo, int iLoc)
{
    
}

void DeleteFirst(PPNODE Head)
{

}

void DeleteLast(PPNODE Head)
{
    
}

void DeleteAtLoc(PPNODE Head, int iLoc)
{
    
}

void display(PNODE Head)
{

}

int count(PNODE Head)
{

    return 0;
}
>>>>>>> bd130305ac6f0bc676494729ce2ec96fb12aacf8:Application Programs/program180.c

int main()
{
    PNODE First = NULL;
<<<<<<< HEAD:Application_Programs/program180.c
    InsertFirst(&First,60);
    InsertFirst(&First,50);
=======
    InsertFirst(&First, 60);
    InsertFirst(&First, 50);

    PNODE First = NULL;
>>>>>>> bd130305ac6f0bc676494729ce2ec96fb12aacf8:Application Programs/program180.c
    return 0;
}