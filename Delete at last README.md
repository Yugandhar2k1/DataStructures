# Singly Linked List Manipulation

This C program demonstrates the creation and deletion of the last node in a singly linked list. Let's break down the program's structure and functionality:

## `struct node` Definition:

- Defines a structure called `node` to represent a node in a singly linked list. Each node has two members:
  - An integer `data` to store the data.
  - A pointer `next` to point to the next node in the list.

## `PrintLinkedList` Function:

- `PrintLinkedList` is a function to print the elements of the linked list. It takes a pointer to a `node p` as a parameter. The function traverses the linked list, printing each node's data value followed by " ---> ". When it reaches the end of the list (where `p` becomes NULL), it prints the last data value followed by " ---> NULL".

## `DeleteAtLast` Function:

- `DeleteAtLast` is a function to delete the last node in the linked list. It takes a pointer to a pointer to the head of the list (`struct node **head`) as a parameter. The function has several cases:
  - If the list is empty (`*head` is NULL), it prints a message and returns 1 to indicate failure.
  - If there is only one node in the list (i.e., `(*head)->next` is NULL), it frees the memory of the head node and sets `*head` to NULL.
  - Otherwise, it uses two pointers, `current` and `previous`, to traverse the list until `current` points to the last node. It then frees the memory of the last node and updates `previous->next` to NULL to remove the link to the last node.

## Main Function:

- The program's entry point:
  - Initializes the head pointer `struct node *head` to NULL, indicating an empty linked list.
  - Asks the user to input the number of nodes they want to create (`node`).
  - In a loop, it prompts the user to enter data values for each node. It dynamically allocates memory for each node and appends it to the end of the linked list.
  - Prints the linked list before performing any deletions.
  - Calls the `DeleteAtLast` function to delete the last node.
  - Finally, it prints the linked list after the deletion.

The program allows users to create a singly linked list, delete the last node, and then displays the list before and after the deletion. If the list is empty or contains only one node, it handles these cases appropriately.

This code is a basic example of linked list manipulation in C, showcasing memory allocation, traversal, and node deletion.
**Enter the number of nodes you want to create:** 3

**Enter the data value for node 1:** 10

**Enter the data value for node 2:** 20

**Enter the data value for node 3:** 30

**Linked list before deleting at the last:**
- 10 ---> 20 ---> 30 ---> NULL

**Linked list after deleting at the last:**
- 10 ---> 20 ---> NULL
