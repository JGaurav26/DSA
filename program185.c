#include<stdio.h>
#include<stdlib.h>
<<<<<<< HEAD:Application_Programs/program185.c
//structure declaration
=======


>>>>>>> bd130305ac6f0bc676494729ce2ec96fb12aacf8:Application Programs/program185.c
struct node
{
    int data;
    struct node *next;
<<<<<<< HEAD:Application_Programs/program185.c
    struct node *previous; //#

=======
    struct node *previous; // #
>>>>>>> bd130305ac6f0bc676494729ce2ec96fb12aacf8:Application Programs/program185.c
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

<<<<<<< HEAD:Application_Programs/program185.c
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
void InsertLast(PPNODE Head, int iNo){
    PNODE newn = NULL;
    PNODE Temp = *Head;
    newn = (PNODE)malloc(sizeof(NODE));
    
    newn->data=iNo;
    newn->next = NULL;
    newn->previous =NULL; //#

    if(*Head==NULL) //LL is Empty
    {
        *Head = newn;
    }
    else 
    {
        //LL is not Empty
        while(Temp->next!=NULL)
        {
            Temp = Temp->next;
        }
        newn->previous=Temp; //#
        Temp->next = newn;
    }

}
void InsertAtLoc(PPNODE Head, int iNo, int iLoc){}

void DeleteFirst(PPNODE Head){
    if(*Head==NULL) //LL is empty
    {
        return;
    } else if(((*Head)->next==NULL)&&((*Head)->previous==NULL))
    {
        //LL contains only one node
        free(*Head);
        *Head = NULL;
    } else {
        *Head = (*Head)->next;
        free((*Head)->previous);//#
        (*Head)->previous=NULL;//#
    }
}
void DeleteLast(PPNODE Head){
    PNODE Temp = *Head;
    if(*Head==NULL) //LL is empty
    {
        return;
    } else if(((*Head)->next==NULL)&&((*Head)->previous==NULL))
    {
        //LL contains only one node
        free(*Head);
        *Head = NULL;
    } else {
    while (Temp->next->next != NULL)
    {
        Temp = Temp->next;
    }
    free(Temp->next);
    Temp->next = NULL;
    }
}
void DeleteAtLoc(PPNODE Head,int iLoc){}

void display(PNODE Head){
    printf("content of linnkedlist are:\n");
    printf("NULL<=>");
    while(Head!=NULL)
    {
        printf("|%d|<=>",Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}
int count (PNODE Head){
    int iCnt = 0;
    while(Head!=NULL)
    {
        Head = Head->next;
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
    PNODE newn = NULL;
    PNODE Temp = *Head;
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = iNo;
    newn -> next = NULL;
    newn -> previous = NULL; // #

    if(*Head == NULL)
    {
        *Head = newn; // LL is empty
    }
    else{
        while (Temp->next != NULL)
        {
            Temp = Temp->next;
        }

        Temp->next = newn;     // Current last node's next points to the new node
        newn->previous = Temp; // #
    }
}

void InsertAtLoc(PPNODE Head, int iNo, int iLoc)
{
    
}

void DeleteFirst(PPNODE Head)
{
    PNODE Temp = *Head;
    if(*Head == NULL) // LL is empty
    {
        return;
    }
    else if(((*Head) -> next == NULL && (*Head) -> previous == NULL)) // LL contains only 1 node
    {
        // LL contains only 1 node
        free(*Head);
        *Head = NULL;
    }
    else{
        *Head = (*Head)->next;
        free((*Head) -> previous);
        (*Head)->previous = NULL;

    }
}

void DeleteLast(PPNODE Head)
{
    PNODE Temp = *Head;
    if(*Head == NULL) // LL is empty
    {
        return;
    }
    else if(((*Head) -> next == NULL && (*Head) -> previous == NULL)) // LL contains only 1 node
    {
        // LL contains only 1 node
        free(*Head);
        *Head = NULL;
    }
    else{
    while (Temp -> next->next != NULL)
    {
        Temp = Temp -> next;
    }
    free(Temp -> next);
    Temp -> next = NULL;
}
}

void DeleteAtLoc(PPNODE Head, int iLoc)
{

}

void display(PNODE Head)
{
    printf("Elements of the linked list are:\n");
    printf("NULL <=> ");
    while(Head != NULL)
    {
        printf("| %d | <=> ", Head->data);
        Head = Head->next;
    }
    printf("NULL \n");
}

int count(PNODE Head)
{
    int iCnt = 0;
    while(Head != NULL)
    {
        Head = Head -> next;
>>>>>>> bd130305ac6f0bc676494729ce2ec96fb12aacf8:Application Programs/program185.c
        iCnt++;
    }
    return iCnt;
}

<<<<<<< HEAD:Application_Programs/program185.c

int main()
{
    PNODE First = NULL;
    InsertFirst(&First,60);
    InsertFirst(&First,50);
    display(First);
    InsertLast(&First,70);
    display(First);
    DeleteFirst(&First);
    display(First);
    int iRet = count(First);
    printf("LL has %d nodes in it \n",iRet);
    DeleteLast(&First);
    display(First);
    iRet = count(First);
    printf("LL has %d nodes in it \n",iRet);
=======
int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 60);
    InsertFirst(&First, 50);
    display(First);

    InsertLast(&First, 70);
    display(First);

    DeleteFirst(&First);
    display(First);
    int iRet = count(First);
    printf("Elements of the linked list are: %d \n",iRet);

    DeleteLast(&First);
    display(First);
    iRet = count(First);
    printf("Elements of the linked list are: %d \n",iRet);
    
>>>>>>> bd130305ac6f0bc676494729ce2ec96fb12aacf8:Application Programs/program185.c
    return 0;
}