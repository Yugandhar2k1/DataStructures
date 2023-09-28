#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void PrintLinkedList(struct node *p)
{
    if (p == NULL)
    {
        printf("The linked list is empty.\n");
        return;
    }
    while (p->next != NULL)
    {
        printf("%d ---> ", p->data);
        p = p->next;
    }
    printf("%d ---> NULL\n", p->data);
}

int DeleteAtLast(struct node **head)
{
    if (*head == NULL)
    {
        printf("The linked list is empty. Nothing to delete.\n");
        return 1;
    }
    else if ((*head)->next == NULL)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
        struct node *current = *head;
        struct node *previous = NULL;

        while (current->next != NULL)
        {
            previous = current;
            current = current->next;
        }

        free(current);
        previous->next = NULL;
    }

    return 0;
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
        if (newnode == NULL)
        {
            printf("Memory allocation failed.\n");
            exit(1);
        }

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

    printf("Linked list before deleting at the last:\n");
    PrintLinkedList(head);

    int deleteResult = DeleteAtLast(&head);

    if (deleteResult == 0)
    {
        printf("Linked list after deleting at the last:\n");
        PrintLinkedList(head);
    }

    return 0;
}
