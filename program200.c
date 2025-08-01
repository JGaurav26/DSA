#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
<<<<<<< HEAD:Application_Programs/program200.c
    struct node  *next;
} NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE Head,PPNODE Tail,int iNo){
=======
    struct node *next;
} NODE,* PNODE,** PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int iNo)
{
>>>>>>> bd130305ac6f0bc676494729ce2ec96fb12aacf8:Application Programs/program200.c
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;

<<<<<<< HEAD:Application_Programs/program200.c
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
>>>>>>> bd130305ac6f0bc676494729ce2ec96fb12aacf8:Application Programs/program200.c
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;

<<<<<<< HEAD:Application_Programs/program200.c
    if((*Head ==NULL) && (*Tail==NULL))//LL is empty
    {
        *Head = newn;
        *Tail = newn;
        (*Tail)->next = *Head;
    } else { //LL contains single node in it
        (*Tail)->next = newn;
        *Tail = newn;   
        (*Tail)->next = *Head;// compulsory add this statement
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
>>>>>>> bd130305ac6f0bc676494729ce2ec96fb12aacf8:Application Programs/program200.c
    }
}


<<<<<<< HEAD:Application_Programs/program200.c
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
>>>>>>> bd130305ac6f0bc676494729ce2ec96fb12aacf8:Application Programs/program200.c
    {
        do
        {
            iCnt++;
            Head = Head->next;
<<<<<<< HEAD:Application_Programs/program200.c
        } while (Head!=Tail->next);
    }   
    return iCnt;
}
void InsertAtLoc(PPNODE Head,PPNODE Tail, int iNo, int iLoc) { 
    int size = 0, i =0;
    size = count(*Head, *Tail);//6
    PNODE newn = NULL;
    PNODE Temp =*Head;

    if((iLoc<1) && (iLoc>(size+1)))// -1,8,11,0
    {
        printf("Invalid location \n");
        return;
    } 

    if(iLoc ==1)
    {
        InsertFirst(Head, Tail,iNo);
    } else if (iLoc == (size+1)) //7
    {
        InsertLast(Head, Tail, iNo);
    } else { //2,3,4,5
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = iNo;
        newn->next =NULL;

        for(i=1;i<iLoc-1;i++)
        {
            Temp = Temp->next;
        }
        newn->next = Temp->next;
        Temp->next =newn;
=======
        } while (Head != Tail->next);
    }
    return iCnt;
}

void InsertAtLoc(PPNODE Head,PPNODE Tail,int iNo, int iLoc)
{
    int size = 0, i = 0;
    size = count(*Head, *Tail);
    PNODE newn = NULL;
    PNODE Temp = *Head;

    if((iLoc<1) && (iLoc>(size+1)))
    {
        printf("Invalid Location \n");
        return;
    }

    if(iLoc == 1)
    {
        InsertFirst(Head, Tail, iNo);
    } else if(iLoc == (size+1))
    {
        InsertLast(Head, Tail, iNo);
    } else {
        newn = (PNODE)malloc(sizeof(NODE));
        newn -> data = iNo;
        newn -> next = NULL;

        for(i = 1; i<iLoc; i++)
        {
            Temp = Temp -> next;
        }
        newn -> next = Temp->next;
        Temp->next = newn;
>>>>>>> bd130305ac6f0bc676494729ce2ec96fb12aacf8:Application Programs/program200.c
    }

}

<<<<<<< HEAD:Application_Programs/program200.c
void DeleteAtLoc(PPNODE Head,PPNODE Tail,int iLoc)
{
    int size=0,i =0;
    size = count(*Head, *Tail);//6
    PNODE Temp =*Head;
    PNODE targatednode =NULL;

    if((iLoc<1)||(iLoc>size))//0,-1,7,8
    {
        printf("invalid location\n");
        return;
    }

    if(iLoc ==1)
    {
        DeleteFirst(Head, Tail);
    } else if(iLoc==size)
    {
        DeleteLast(Head, Tail);
    } else { //2,3,4
        for(i=1;i<iLoc-1;i++)
        {
            Temp = Temp->next;
        }
        targatednode=Temp->next;
        Temp->next =Temp->next->next;
        free(targatednode);
    }
}
int main()
{
    PNODE First = NULL;
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
    InsertAtLoc(&First,&Last,100,3);
    display(First,Last);
    printf("Total nodes in LL are : %d \n",count(First,Last));
    DeleteAtLoc(&First,&Last,3);
    display(First,Last);
    printf("Total nodes in LL are : %d \n",count(First,Last));
    return 0;
}
=======
void DeleteAtLoc(PPNODE Head,PPNODE Tail, int iLoc)
{
    int size = 0, i = 0;
    size = count(*Head, *Tail);
    PNODE temp = *Head;
    PNODE targetednode = NULL;

    if((iLoc<1) || (iLoc>size))
    {
        printf("Invalid Location \n");
        return;
    }

    if(iLoc == 1)
    {
        DeleteFirst(Head, Tail);
    } else if(iLoc == size)
    {
        DeleteLast(Head, Tail);
    } else{
        for(i=1 ; i<iLoc-1; i++)
        {
            temp = temp->next;
        }
        targetednode = temp->next;
        temp->next = temp->next->next;
        free(targetednode);
    }
}

int main()
{
    PNODE First = NULL;
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
    InsertAtLoc(&First, &Last, 100, 3);
    display(First, Last);
    printf("Total nodes in LL are :: %d \n", count(First, Last));

    DeleteAtLoc(&First, &Last, 3);
    display(First, Last);
    printf("Total nodes in LL are :: %d \n", count(First, Last));
    return 0;
}
>>>>>>> bd130305ac6f0bc676494729ce2ec96fb12aacf8:Application Programs/program200.c
