#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
<<<<<<< HEAD:Application_Programs/program194.c
    struct node  *next;
} NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE Head,PPNODE Tail,int iNo){
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;

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
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;

    if((*Head ==NULL) && (*Tail==NULL))//LL is empty
    {
        *Head = newn;
        *Tail = newn;
        (*Tail)->next = *Head;
    } else { //LL contains single node in it
        (*Tail)->next = newn;
        *Tail = newn;   
        (*Tail)->next = *Head;// compulsory add this statement
    }
}
void InsertAtLoc(PPNODE Head,PPNODE Tail, int iNo, int iLoc){}

void DeleteFirst(PPNODE Head,PPNODE Tail){}
void DeleteLast(PPNODE Head,PPNODE Tail){}
void DeleteAtLoc(PPNODE Head,PPNODE Tail,int iLoc){}

void display(PNODE Head,PNODE Tail) {
printf("Elements in the linkedlist are :\n");
if((Head!=NULL) && (Tail!=NULL))
{
    do
    {
        printf("| %d | ->",Head->data);
        Head = Head->next;
    } while (Head!=Tail->next);
    printf("First Node Address\n");
}
}
int count (PNODE Head,PPNODE Tail){return 0;}
=======
    struct node *next;
} NODE,* PNODE,** PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;

    if ((*Head == NULL) && (*Tail == NULL)) // LL is empty
    {
        *Head = newn;
        *Tail = newn;
        (*Tail)->next = *Head; // Circular link
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
        (*Tail)->next = *Head; // Maintain circular link
    }

}

void InsertLast(PPNODE Head, PPNODE Tail, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;

    if ((*Head == NULL) && (*Tail == NULL)) // LL is empty
    {
        *Head = newn;
        *Tail = newn;
        (*Tail)->next = *Head; // Circular link
    }
    else
    {
        (*Tail)->next = newn;
         *Tail = newn;
        (*Tail)->next = *Head; // Maintain circular link
    }
}

void InsertAtLoc(PPNODE Head,int iNo, int iLoc)
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

void display(PNODE Head, PNODE Tail)
{
    printf("Elements in the Linked List are: ");
    if ((Head != NULL) && (Tail != NULL))
    {
        do
        {
            printf("| %d | -> ", Head->data);
            Head = Head->next;
        } while (Head != Tail->next);
        printf("First node Address\n");
    }
    else
    {
        printf("List is empty.\n");
    }
}

int count(PNODE Head)
{
    return 0;
}
>>>>>>> bd130305ac6f0bc676494729ce2ec96fb12aacf8:Application Programs/program194.c

int main()
{
    PNODE First = NULL;
<<<<<<< HEAD:Application_Programs/program194.c
    PNODE Last = NULL; // #
    InsertFirst(&First,&Last,10);
    InsertFirst(&First,&Last,20);
    InsertFirst(&First,&Last,30);
    InsertLast(&First,&Last,40);
    InsertLast(&First,&Last,50);
    display(First,Last);
    return 0;
}
=======
    PNODE Last = NULL; //#

    InsertFirst(&First, &Last, 10);
    InsertFirst(&First, &Last, 20);
    InsertFirst(&First, &Last, 30);

    InsertFirst(&First, &Last, 40);
    InsertFirst(&First, &Last, 50);

    display(First, Last);
    return 0;
}
>>>>>>> bd130305ac6f0bc676494729ce2ec96fb12aacf8:Application Programs/program194.c
