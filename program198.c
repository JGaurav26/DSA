#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
<<<<<<< HEAD:Application_Programs/program198.c
    struct node  *next;
} NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE Head,PPNODE Tail,int iNo){
=======
    struct node *next;
} NODE,* PNODE,** PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int iNo)
{
>>>>>>> bd130305ac6f0bc676494729ce2ec96fb12aacf8:Application Programs/program198.c
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;

<<<<<<< HEAD:Application_Programs/program198.c
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
>>>>>>> bd130305ac6f0bc676494729ce2ec96fb12aacf8:Application Programs/program198.c
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;

<<<<<<< HEAD:Application_Programs/program198.c
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

void DeleteFirst(PPNODE Head,PPNODE Tail) { 
    if((*Head ==NULL && *Tail==NULL)) // LL Empty
    {
        return;
    } else if (*Head==*Tail) //LL with single node
    {
        free(*Head);
        *Head =NULL;
        *Tail=NULL;
    } else { //LL with multipe nodes
        *Head = (*Head)->next;
        free ((*Tail)->next);
        (*Tail)->next =*Head;
    }
}
void DeleteLast(PPNODE Head,PPNODE Tail) {
    PNODE Temp = *Head;
  if((*Head ==NULL && *Tail==NULL)) // LL Empty
    {
        return;
    } else if (*Head==*Tail) //LL with single node
    {
        free(*Head);
        *Head =NULL;
        *Tail=NULL;
    } else 
    { //LL with multipe nodes
        while(Temp->next!=*Tail)
            {
                Temp =Temp->next;
            }
            free(*Tail);
            *Tail = Temp;
            (*Tail)->next = *Head;
    }
}
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

int count (PNODE Head,PNODE Tail)
{
    int iCnt =0;
    if((Head!=NULL) && (Tail!=NULL))
=======
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

void DeleteFirst(PPNODE Head, PPNODE Tail)
{
    
    if(*Head == NULL && *Tail == NULL)
    {
        return;
    }
    else if(*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        (*Tail)->next = (*Head)->next;  // Tail points to second node
        free(*Head);                    // Free the first node
        *Head = (*Tail)->next;          // Move head to second node
    }
}

void DeleteLast(PPNODE Head, PPNODE Tail)
{
    PNODE temp = *Head;

    if(*Head == NULL && *Tail == NULL)
    {
        return;
    }
    else if(*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else // LL with multiple nodes
    {
        while (temp->next != *Tail)
        {
            temp = temp->next;
        }

        free(*Tail);
        *Tail = temp;
        (*Tail)->next = *Head;
    }
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

int count(PNODE Head, PNODE Tail)
{
    int iCnt = 0;
    if ((Head != NULL) && (Tail != NULL))
>>>>>>> bd130305ac6f0bc676494729ce2ec96fb12aacf8:Application Programs/program198.c
    {
        do
        {
            iCnt++;
            Head = Head->next;
<<<<<<< HEAD:Application_Programs/program198.c
        } while (Head!=Tail->next);
    }   
=======
        } while (Head != Tail->next);
    }
>>>>>>> bd130305ac6f0bc676494729ce2ec96fb12aacf8:Application Programs/program198.c
    return iCnt;
}

int main()
{
    PNODE First = NULL;
<<<<<<< HEAD:Application_Programs/program198.c
    PNODE Last = NULL; // #
    InsertFirst(&First,&Last,30);
    InsertFirst(&First,&Last,20);
    InsertFirst(&First,&Last,10);
    InsertLast(&First,&Last,40);
    InsertLast(&First,&Last,50);
    InsertLast(&First,&Last,60);
    display(First,Last);
    printf("Total nodes in LL are : %d \n",count(First,Last));
    DeleteFirst(&First,&Last);
    display(First,Last);
    printf("Total nodes in LL are : %d \n",count(First,Last));
    DeleteLast(&First,&Last);
    display(First,Last);
    printf("Total nodes in LL are : %d \n",count(First,Last));
    return 0;
}
=======
    PNODE Last = NULL; //#

    InsertFirst(&First, &Last, 30);
    InsertFirst(&First, &Last, 20);
    InsertFirst(&First, &Last, 10);
    InsertFirst(&First, &Last, 40);
    InsertFirst(&First, &Last, 50);
    InsertFirst(&First, &Last, 60);

    display(First, Last);
    printf("Total nodes in LL are :: %d \n", count(First, Last));

    DeleteFirst(&First, &Last);
    display(First, Last);
    printf("Total nodes in LL are :: %d \n", count(First, Last));

    DeleteLast(&First, &Last);
    display(First, Last);
    printf("Total nodes in LL are :: %d \n", count(First, Last));
    return 0;
}
>>>>>>> bd130305ac6f0bc676494729ce2ec96fb12aacf8:Application Programs/program198.c
