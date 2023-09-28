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

int DeleteAtFront(struct node **head)
{
    if (*head == NULL)
    {
        printf("The linked list is empty. Nothing to delete.\n");
        return 1; // Return 1 to indicate failure
    }

    struct node *temp = *head;
    *head = (*head)->next; // Update the head to the next node
    free(temp); // Free the memory of the deleted node

    return 0; // Return 0 to indicate success
}

void PrintLinkedList(struct node* p)
{
    while (p != NULL)
    {
        printf("%d ---> ", p->data);
        p = p->next; 
    }
    printf("NULL\n");   
}

int main()
{
    struct node *head = NULL;
    int node, data;
    printf("Enter the number of nodes you want to create: ");
    scanf("%d", &node);
    printf("Enter the number of data you want to insert: ");
    scanf("%d", &data);

    for (int i = 0; i < node; i++)
    {
        int data;
        printf("Enter the data value for node %d: ", i + 1);
        scanf("%d", &data);

        InsertAtFront(&head, data);
    }
    
    printf("Before inserting at front:\n");
    PrintLinkedList(head);
    
    InsertAtFront(&head, data);
    printf("After inserting at front:\n");
    PrintLinkedList(head);

    printf("Deleting at front:\n");
    DeleteAtFront(&head);
    PrintLinkedList(head);

    return 0;
}
