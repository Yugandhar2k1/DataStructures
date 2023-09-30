# Data Structures

You can understand data structures programs clearly from the beginning. Let's start with a basic data structure program to print a singly linked list. We'll begin with the file `SingleLinkedListManualInput.c`.

In this program:

- We define a `struct node` which represents a node in the singly linked list. It has two members: an integer `data` and a pointer to the next node `next`.

- In the `main` function, we declare a pointer to the head of the linked list `struct node *head` and initialize it to `NULL`.

- We create four nodes `one`, `two`, `three`, and `four` using `malloc` and set their `data` values to 12, 13, 14, and 15, respectively.

- We establish the links between the nodes by setting the `next` pointers. `one->next` points to `two`, `two->next` points to `three`, `three->next` points to `four`, and `four->next` is set to `NULL` to indicate the end of the list.

- We set the `head` pointer to point to the first node `one`.

- Finally, we call the `printlist` function, passing the `head` pointer to print the elements of the linked list.

In the `printlist` function:

- It takes a pointer to a `node p` as a parameter.

- It uses a `while` loop to iterate through the linked list starting from the `node` pointed to by `p`.

- Inside the loop, it prints the `data` of the current node followed by "--->".

- After the loop, it prints "NULL" to indicate the end of the list.

So, when you run this code, it will create a linked list with the values 12, 13, 14, and 15. Then it will print them as follows:
