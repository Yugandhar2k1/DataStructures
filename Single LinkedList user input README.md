
## Single LinkedList User Input

You include the necessary header files `stdio.h` and `stdlib.h`.

You define a `struct node` which represents a node in the singly linked list. It has two members: an integer `data` and a pointer to the next node `next`.

You define a function `PrintLinkedList` that takes a pointer to the head of the linked list as a parameter and prints the elements of the linked list.

In the `main` function:

- You declare a pointer to the head of the linked list `struct node *head` and initialize it to `NULL`.

- You prompt the user to enter the number of nodes they want to create.

- You use a `for` loop to iterate `node` times (as specified by the user).

- Inside the loop, you prompt the user to enter the data value for each node.

- You dynamically allocate memory for a new node `newnode` using `malloc`, set its `data` to the entered value, and initialize its `next` pointer to `NULL`.

- You then check if the `head` is `NULL` (i.e., if the list is empty). If it is, you make the `head` point to the newly created `newnode`. Otherwise, you traverse the list to find the last node and make its `next` pointer point to `newnode`, effectively adding it to the end of the list.

Finally, after creating the linked list, you call the `PrintLinkedList` function, passing the `head` pointer to print the elements of the linked list.

The code allows the user to create a linked list of any desired size and then prints the elements. Here's an example of the program's output:
- **Enter the number of nodes you want to create:** 3
- **Enter the data value for node 1:** 10
- **Enter the data value for node 2:** 20
- **Enter the data value for node 3:** 30

**Linked list elements are:**

- 10 ---> 20 ---> 30 ---> NULL

