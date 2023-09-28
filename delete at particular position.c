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

struct node *DeleteAtPosition(struct node *head, int position)
{
    if (head == NULL)
    {
        printf("The linked list is empty. Nothing to delete.\n");
        return NULL;
    }

    if (position == 1)
    {
        struct node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    struct node *current = head;
    struct node *previous = NULL;
    int count = 1;

    while (current != NULL && count < position)
    {
        previous = current;
        current = current->next;
        count++;
    }

    if (count < position || current == NULL)
    {
        printf("Position exceeds the length of the linked list.\n");
        return head;
    }

    previous->next = current->next;
    free(current);
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

    printf("Linked list before deleting at a particular position:\n");
    PrintLinkedList(head);

    int position;
    printf("Enter the position of the node you want to delete: ");
    scanf("%d", &position);

    head = DeleteAtPosition(head, position);

    printf("Linked list after deleting at a particular position:\n");
    PrintLinkedList(head);

    return 0;
}
