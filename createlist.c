#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void PrintLinkedList(struct node* p)
{
    printf("Linked list elements are: \n");
    while (p != NULL)
    {
        printf("%d ---> ", p ->data);
        p = p -> next; 
    }
    printf("NULL");   
}
void main()
{
    struct node *head = NULL;
    int node;
    printf("Enter the number of nodes you want to create: ");
    scanf("%d", &node);

    for(int i=0; i<node; i++)
    {
        int data;
        printf("enter the data value for node %d: ", i+1);
        scanf("%d", &data);

        struct node *newnode = malloc(sizeof(struct node));
        newnode -> data = data;
        newnode -> next = NULL;
        if(head == NULL) 
        {
            head = newnode;
        }
        else{
            struct node *current = head;
            while(current->next != NULL)
            {
                current = current -> next;
            }
            current -> next = newnode;
        }
    }
    PrintLinkedList(head);
}
