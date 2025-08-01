#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
<<<<<<< HEAD:Application_Programs/program192.c
    struct node  *next;
} NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE Head,PPNODE Tail,int iNo){
=======
    struct node *next;
} NODE,* PNODE,** PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int iNo)
{
>>>>>>> bd130305ac6f0bc676494729ce2ec96fb12aacf8:Application Programs/program192.c
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;

<<<<<<< HEAD:Application_Programs/program192.c
    if((*Head ==NULL) && (*Tail==NULL))//LL is empty
    {
        *Head = newn;
        *Tail = newn;
        (*Tail)->next = *Head;
    } else { //LL contains 1 node in it
        newn->next=*Head;
        *Head = newn;
        (*Tail)->next=*Head;
    }
}
void InsertLast(PPNODE Head,PPNODE Tail,int iNo){
=======
    if((Head == NULL) && (Tail == NULL)) //LL is empty
    {
        *Head = newn;
        *Tail = newn;
        (*Tail)->next = *Head; // Circular link
    }
    else
    {
        newn->next = (*Head)->next;
        (*Head)->next = newn;
        *Head = newn; // Update head to new node
        (*Tail)->next = *Head; // Maintain circular link
    }

}

void InserLast(PPNODE Head, PPNODE Tail, int iNo)
{
>>>>>>> bd130305ac6f0bc676494729ce2ec96fb12aacf8:Application Programs/program192.c
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;

<<<<<<< HEAD:Application_Programs/program192.c
    if((*Head ==NULL) && (*Tail==NULL))//LL is empty
    {
        *Head = newn;
        *Tail = newn;
        (*Tail)->next = *Head;
    } else { //LL contains single node in it
        *Tail = newn;
        (*Head)->next = newn;
        (*Tail)->next = *Head;// compulsory add this statement
    }
}
void InsertAtLoc(PPNODE Head,PPNODE Tail, int iNo, int iLoc){}

void DeleteFirst(PPNODE Head,PPNODE Tail){}
void DeleteLast(PPNODE Head,PPNODE Tail){}
void DeleteAtLoc(PPNODE Head,PPNODE Tail,int iLoc){}

void display(PNODE Head,PPNODE Tail){}
int count (PNODE Head,PPNODE Tail){return 0;}
=======
    if((Head == NULL) && (Tail == NULL)) //LL is empty
    {
        *Head = newn;
        *Tail = newn;
        (*Tail)->next = *Head; // Circular link
    }
    else
    {
        *Tail = newn;
        (*Head)->next = newn;
        (*Tail)->next = *Head; // compulsory add this statement
    }
}

void InserAtLoc(PPNODE Head,int iNo, int iLoc)
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
>>>>>>> bd130305ac6f0bc676494729ce2ec96fb12aacf8:Application Programs/program192.c

int main()
{
    PNODE First = NULL;
<<<<<<< HEAD:Application_Programs/program192.c
    PNODE Last = NULL; // #
    return 0;
}
=======
    PNODE Second = NULL; //#
    return 0;
}
>>>>>>> bd130305ac6f0bc676494729ce2ec96fb12aacf8:Application Programs/program192.c
