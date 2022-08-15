/*Napisi program koji ce napraviti i prikazati povezanu listu/popis.*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;                        
    struct node* nextptr;           
}*stnode;

void createNodeList(int n); 
void displayList();         

int main()
{
    int n;
    printf("\n\n Napravi povezanu listu :\n");

    printf(" Unesi broj cvorova : ");
    scanf("%d", &n);
    createNodeList(n);
    printf("\n Podaci uneseni u listu : \n");
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
        printf(" Memorija nije alocirana!");
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
                printf(" Memorija nije alocirana!");
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
void displayList()
{
    struct node* tmp;
    if (stnode == NULL)
    {
        printf(" Lista je prazna.");
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