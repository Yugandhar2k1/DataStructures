#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void PrintLinkedList(struct node *p)
{
    while (p != NULL)
    {
        printf("%d ---> ", p->data);
        p = p->next;
    }
    printf("NULL\n");
}

void InsertAtEnd(struct node **head, int data)
{
    struct node *newnode = malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    newnode->data = data;
    newnode->next = NULL;

    if (*head == NULL)
    {
        *head = newnode;
    }
    else
    {
        struct node *current = *head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newnode;
    }
}

int main()
{
    struct node *head = NULL;
    int node, data;
    printf("Enter the number of nodes you want to create: ");
    scanf("%d", &node);

    for (int i = 0; i < node; i++)
    {
        int data;
        printf("Enter the data value for node %d: ", i + 1);
        scanf("%d", &data);

        InsertAtEnd(&head, data);
    }

    printf("Linked list before inserting at the end:\n");
    PrintLinkedList(head);

    printf("Enter the data value you want to insert at the end: ");
    scanf("%d", &data);
    InsertAtEnd(&head, data);

    printf("Linked list after inserting at the end:\n");
    PrintLinkedList(head);

    return 0;
}
