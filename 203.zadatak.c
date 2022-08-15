/*Napisite program koji ce napraviti povezani popis s n cvorova te ce ih ispisati u obrnutom poretku.*/
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;                   
    struct node* nextptr;      
}*stnode;

void createNodeList(int n);     
void reverseDispList();        
void displayList();             

int main()
{
    int n;
    printf("\n\n Povezani popis :\n");
    printf("------------------------------------------------------------------------------\n");

    printf(" Unesite broj cvorova: ");
    scanf("%d", &n);
    createNodeList(n);
    printf("\n Podaci za listu : \n");
    displayList();
    reverseDispList();
    printf("\n Obrnuta lista :  \n");
    displayList();
    return 0;
}

void createNodeList(int n)
{
    struct node* fnNode, * tmp;
    int num, i;
    stnode = (struct node*)malloc(sizeof(struct node));
    if (stnode == NULL) 
    {
        printf(" Memorija nije alocirana.");
    }
    else
    {
    
        printf(" Podaci za prvi cvor : ");
        scanf("%d", &num);
        stnode->num = num;
        stnode->nextptr = NULL; 
        tmp = stnode;
     
        for (i = 2; i <= n; i++)
        {
            fnNode = (struct node*)malloc(sizeof(struct node));
            if (fnNode == NULL)
            {
                printf(" emorija nije alcoirana.");
                break;
            }
            else
            {
                printf(" Podaci za drugi cvor %d : ", i);
                scanf(" %d", &num);
                fnNode->num = num;      
                fnNode->nextptr = NULL; 
                tmp->nextptr = fnNode;
                tmp = tmp->nextptr;
            }
        }
    }
}

void reverseDispList()
{
    struct node* prevNode, * curNode;

    if (stnode != NULL)
    {
        prevNode = stnode;
        curNode = stnode->nextptr;
        stnode = stnode->nextptr;

        prevNode->nextptr = NULL; 

        while (stnode != NULL)
        {
            stnode = stnode->nextptr;
            curNode->nextptr = prevNode;

            prevNode = curNode;
            curNode = stnode;
        }
        stnode = prevNode; 
    }
}

void displayList()
{
    struct node* tmp;
    if (stnode == NULL)
    {
        printf(" Nema podataka u listi ");
    }
    else
    {
        tmp = stnode;
        while (tmp != NULL)
        {
            printf(" Podaci = %d\n", tmp->num);   
            tmp = tmp->nextptr;                 
        }
    }
}