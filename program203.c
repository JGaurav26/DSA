#include<stdio.h>
#include<stdlib.h>
<<<<<<< HEAD:Application_Programs/program203.c
=======

>>>>>>> bd130305ac6f0bc676494729ce2ec96fb12aacf8:Application Programs/program203.c
typedef struct node
{
    int data;
    struct node *next;
<<<<<<< HEAD:Application_Programs/program203.c
    struct node *prev;
} NODE, *PNODE,**PPNODE;

//call by address
void InsertFirst(PPNODE Head, PPNODE Tail, int iNo)
{
    
}
void InsertLast(PPNODE Head, PPNODE Tail, int iNo){}
void InsertAtLoc(PPNODE Head, PPNODE Tail, int iNo,int iLoc){}
void DeleteFirst(PPNODE Head,PPNODE Tail){}
void DeleteLast(PPNODE Head,PPNODE Tail){}
void DeleteAtLoc(PPNODE Head,PPNODE Tail, int iLoc){}
//call by value
void display(PNODE Head,PNODE Tail){}
void count(PNODE Head,PNODE Tail){}

int main()
{
    PNODE First =NULL;
    PNODE Last = NULL;
    return 0;
}
=======
    struct node *previous;
}NODE, *PNODE, **PPNODE;

// CALL BY ADDRESS
void InsertFirst(PPNODE Head, PPNODE Tail, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn -> data = iNo;
    newn -> next = NULL;
    newn -> previous = NULL;

    if((*Head == NULL) && (*Tail == NULL))  // LL is empty
    {
        *Head = newn;
        *Tail = newn;
    } else { // LL not empty
        newn -> next = *Head;
        (*Head) -> previous = newn;
        (*Head) = newn;
    }
    
    (*Tail) -> next = *Head;
    (*Head) -> previous = *Tail;
}

void InsertLast(PPNODE Head, PPNODE Tail, int iNo)
{

}

void InsertAtLoc(PPNODE Head, PPNODE Tail, int iNo, int iLoc)
{

}

void DeleteFirst(PPNODE Head, PPNODE Tail)
{

}

void DeleteLast(PPNODE Head, PPNODE Tail)
{

}

void DeleteAtLoc(PPNODE Head, PPNODE Tail, int iLoc)
{

}

// CALL BY VALUE
void Display(PNODE Head,  PNODE Tail)
{

}

void Count(PNODE Head,  PNODE Tail)
{

}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;
    return 0;
}
>>>>>>> bd130305ac6f0bc676494729ce2ec96fb12aacf8:Application Programs/program203.c
