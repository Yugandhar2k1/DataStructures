#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int InsertAtFront(struct node **head, int data)
{
    struct node *newnode = malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    newnode->data = data;
    newnode->next = *head; // Set the next of the new node to the current head
    *head = newnode;       // Update the head to point to the new node

   return 0; // Return the new head
}
void PrintLinkedList(struct node* p)
{
    printf("Linked list elements are: \n");
    while (p != NULL)
    {
        printf("%d ---> ", p ->data);
        p = p -> next; 
    }
    printf("NULL\n");   
}
void main()
{
    struct node *head = NULL;
    int node, data;
    printf("Enter the number of nodes you want to create: ");
    scanf("%d", &node);
    printf("Enter the number of data you want to insert: ");
    scanf("%d", &data);

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
    printf("Before inserting at front:\n");
    PrintLinkedList(head);
    
    InsertAtFront(&head, data);
    printf("After inserting at front:\n");
    PrintLinkedList(head);
}