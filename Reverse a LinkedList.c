#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void printlist(struct node* p) {
    while (p != NULL) {
        printf("%d--->", p->data);
        p = p->next;
    }
    printf("NULL\n");
}

struct node* reverseList(struct node* head) {
    struct node* prev = NULL;
    struct node* current = head;
    struct node* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}

int main() {
    struct node *head = NULL;
    struct node *one;
    struct node *two;
    struct node *three;
    struct node *four;

    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));
    four = malloc(sizeof(struct node));

    one->data = 12;
    two->data = 13;
    three->data = 14;
    four->data = 15;

    one->next = two;
    two->next = three;
    three->next = four;
    four->next = NULL;

    head = one;

    printf("Original Linked List:\n");
    printlist(head);

    head = reverseList(head);

    printf("\nReversed Linked List:\n");
    printlist(head);

    return 0;
}
