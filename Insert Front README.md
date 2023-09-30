# Single Linked List with User Input in C

This C code demonstrates the creation of a singly linked list with user-defined inputs. Let's break down the key components:

## Struct Node Definition

The code defines a structure `struct node` to represent a node in a singly linked list. Each node contains two components:
- An integer `data` to hold the data.
- A pointer `next` that points to the next node in the list.

## InsertAtFront Function

`InsertAtFront` is a function responsible for inserting a new node at the front of the linked list. It takes two arguments:
- A pointer to a pointer to the head of the list (`struct node **head`).
- The integer data to be inserted.

Inside the function:
- Memory is allocated for a new node using `malloc`.
- It checks if the memory allocation was successful. If not, it prints an error message and exits the program.
- The data field of the new node is set to the provided data.
- The next field of the new node is set to point to the current head of the list.
- The head pointer is updated to point to the newly created node.
- The function returns 0 to indicate a successful operation.

## PrintLinkedList Function

The `PrintLinkedList` function is defined to print the elements of the linked list. It takes a pointer to the head of the list (`struct node* p`) as an argument.

Inside the function:
- A while loop is used to traverse the list, printing each node's data value followed by " ---> ".
- When it reaches the end of the list (where `p` becomes `NULL`), it prints "NULL" to indicate the end of the list.

## Main Function

The `main` function is where program execution begins. It follows these steps:
- Declares a pointer to the head of the linked list (`struct node *head`) and initializes it to `NULL`.
- Prompts the user to enter two values:
  - The number of nodes they want to create (`node`).
  - The data value they want to insert at the front of the list (`data`).
- Enters a loop to create nodes based on the user's input:
  - Memory is allocated for a new node (`newnode`) using `malloc`.
  - The user is prompted to enter data for each node.
  - The new node's data field is set to the user's input.
  - The next field is initialized to `NULL`.
  - If the list is empty (head is `NULL`), the head is updated to point to the new node. Otherwise, the code traverses the list to find the last node and adds the new node to the end.
- Prints the linked list's elements before inserting at the front.
- Calls the `InsertAtFront` function to insert the specified data value at the front of the list.
- Prints the linked list's elements after the insertion.

## Output

Here's an example of the program's output when you run it with user inputs:

- **Enter the number of nodes you want to create:** 3
- **Enter the number of data you want to insert:** 42

- **Enter the data value for node 1:** 10
- **Enter the data value for node 2:** 20
- **Enter the data value for node 3:** 30

**Before inserting at front:**
Linked list elements are:
- 10 ---> 20 ---> 30 ---> NULL

**After inserting at front:**
Linked list elements are:
- 42 ---> 10 ---> 20 ---> 30 ---> NULL
