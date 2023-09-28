#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void PrintLinkedList(struct node *p)
{
    printf("Linked list elements are: ");
    while (p != NULL)
    {
        printf("%d ---> ", p->data);
        p = p->next;
    }
    printf("NULL\n");
}

struct node *InsertAtPosition(struct node *head, int data, int position)
{
    struct node *newnode = malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    newnode->data = data;
    newnode->next = NULL;

    if (position == 1)
    {
        newnode->next = head;
        return newnode;
    }

    struct node *current = head;
    for (int i = 1; i < position - 1 && current != NULL; i++)
    {
        current = current->next;
    }

    if (current == NULL)
    {
        printf("Position exceeds the length of the linked list.\n");
        free(newnode);
        return head;
    }

    newnode->next = current->next;
    current->next = newnode;

    return head;
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

        struct node *newnode = malloc(sizeof(struct node));
        newnode->data = data;
        newnode->next = NULL;

        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            struct node *current = head;
            while (current->next != NULL)
            {
                current = current->next;
            }
            current->next = newnode;
        }
    }

    printf("Linked list before inserting at a particular position:\n");
    PrintLinkedList(head);

    int position, newData;
    printf("Enter the position where you want to insert a node: ");
    scanf("%d", &position);
    printf("Enter the data value for the new node: ");
    scanf("%d", &newData);

    head = InsertAtPosition(head, newData, position);

    printf("Linked list after inserting at a particular position:\n");
    PrintLinkedList(head);

    return 0;
}
