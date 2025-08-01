#include<stdio.h>
#include<stdlib.h>
<<<<<<< HEAD:Application_Programs/program179.c
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
>>>>>>> bd130305ac6f0bc676494729ce2ec96fb12aacf8:Application Programs/program179.c
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

<<<<<<< HEAD:Application_Programs/program179.c
void InsertFirst(PPNODE Head, int iNo){}
void InsertLast(PPNODE Head, int iNo){}
void InsertAtLoc(PPNODE Head, int iNo, int iLoc){}

void DeleteFirst(PPNODE Head){}
void DeleteLast(PPNODE Head){}
void DeleteAtLoc(PPNODE Head,int iLoc){}

void display(PNODE Head){}
int count (PNODE Head){return 0;}


int main()
{
    PNODE First = NULL;
    return 0;
}

=======
void InsertFirst(PPNODE Head, int iNo)
{

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

int main()
{
    

    PNODE First = NULL;
    return 0;
}
>>>>>>> bd130305ac6f0bc676494729ce2ec96fb12aacf8:Application Programs/program179.c
