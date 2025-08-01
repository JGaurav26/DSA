#include<stdio.h>
#include<stdlib.h>
<<<<<<< HEAD:Application_Programs/program201.c
=======

>>>>>>> bd130305ac6f0bc676494729ce2ec96fb12aacf8:Application Programs/program201.c
typedef struct node
{
    int data;
    struct node *next;
<<<<<<< HEAD:Application_Programs/program201.c
    struct node *prev;
} NODE, *PNODE,**PPNODE;

int main()
{
    PNODE First =NULL;
    PNODE Last = NULL;
    return 0;
}
=======
    struct node *previous;
}NODE, *PNODE, **PPNODE;

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;
    return 0;
}
>>>>>>> bd130305ac6f0bc676494729ce2ec96fb12aacf8:Application Programs/program201.c
