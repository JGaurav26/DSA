#include<stdio.h>
#include<stdlib.h>
<<<<<<< HEAD:Application_Programs/program186.c
//structure declaration
=======


>>>>>>> bd130305ac6f0bc676494729ce2ec96fb12aacf8:Application Programs/program186.c
struct node
{
    int data;
    struct node *next;
<<<<<<< HEAD:Application_Programs/program186.c
    struct node *previous; //#

=======
    struct node *previous; // #
>>>>>>> bd130305ac6f0bc676494729ce2ec96fb12aacf8:Application Programs/program186.c
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

<<<<<<< HEAD:Application_Programs/program186.c
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
int count(PNODE Head);

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

void InsertAtLoc(PPNODE Head, int iNo, int iLoc)
{
    int size = 0, i = 0; // 6
    size = count(*Head);

    PNODE newn = NULL;
    PNODE temp = *Head;

    if( (iLoc < 1) || (iLoc > size + 1) ) // 8, -1
    {
        printf("Invalid position: %d\n", iLoc);
        return;
    }

    if(iLoc == 1)
    {
        InsertFirst(Head, iNo);
    }
    else if(iLoc == (size + 1))
    {
        InsertLast(Head, iNo);
    }
    else{
        newn = (PNODE)malloc(sizeof(NODE));
        newn -> data = iNo;
        newn -> next = NULL;
        newn -> previous = NULL;

        for(int i = 1; i < iLoc - 1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        newn->previous = temp; // #

        temp->next->previous = newn; // #
        temp->next = newn;
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
>>>>>>> bd130305ac6f0bc676494729ce2ec96fb12aacf8:Application Programs/program186.c
        iCnt++;
    }
    return iCnt;
}

<<<<<<< HEAD:Application_Programs/program186.c
void InsertAtLoc(PPNODE Head, int iNo, int iLoc)
{
    int size =0, i=0;
    size =count(*Head);//6

    PNODE newn = NULL;
    PNODE temp = *Head;

    if((iLoc<1)||(iLoc>(size+1))) //-1,8
    {
        printf("Invalid index/position");
        return;
    } 
    
    if(iLoc==1)
    {
        InsertFirst(Head,iNo);
    }
    else if(iLoc==(size+1))//7
    {
        InsertLast(Head,iNo);
    } else { //2,5,4
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data= iNo;
        newn->next =NULL;
        newn->previous =NULL;//#

        for(i=1;i<iLoc-1;i++){
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->previous = newn; //#
        temp->next=newn;
        newn->previous = temp; //#

    }
}
int main()
{
    PNODE First = NULL;
    InsertFirst(&First,60);
    InsertFirst(&First,50);
    InsertLast(&First,40);
    InsertAtLoc(&First,100,1);
    InsertAtLoc(&First,100,5);
    InsertAtLoc(&First,45,3);
    display(First);
    int iRet = count(First);
    printf("LL has %d nodes in it \n",iRet);
=======
int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 60);
    InsertFirst(&First, 50);
    InsertLast(&First, 70);
    InsertAtLoc(&First, 100,1);
    InsertAtLoc(&First, 100,5);
    InsertAtLoc(&First, 45,3);
    display(First);
    int iRet = count(First);
    printf("Elements of the linked list are: %d \n",iRet);
    
>>>>>>> bd130305ac6f0bc676494729ce2ec96fb12aacf8:Application Programs/program186.c
    return 0;
}