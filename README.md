## Singly Linked List in C

### Node Structure
We start by defining a structure `struct node` to represent a node in the singly linked list. Each node contains an integer data field (`data`) and a pointer to the next node (`next`).

### Print Function
The `printList` function is used to print the linked list. It takes a pointer to the head of the list as an argument and iterates through the list, printing the data in each node, followed by an arrow (`--->`) to indicate the next node. When it reaches the end of the list, it prints "NULL" to indicate the end of the list.

### Main Function
In the main function:
1. We create four nodes (`one`, `two`, `three`, and `four`) using `malloc` and assign values (`12`, `13`, `14`, and `15`, respectively) to their data fields.
2. We establish the connections between the nodes to create a linked list: `one` points to `two`, `two` points to `three`, `three` points to `four`, and `four` points to `NULL`.
3. We set the head pointer to point to the first node, `one`.
4. We then print the original linked list using the `printList` function.

### Reverse Function
Next, we call the `reverseList` function to reverse the linked list. This function iterates through the list, changing the direction of pointers so that the last node becomes the new head, and the old head (previously `one`) becomes the last node. The reversed list is returned and assigned to the head pointer.

### Output
Finally, we print the reversed linked list using the `printList` function again.

**Sample Output:**
**Original Linked List:**
12 ---> 13 ---> 14 ---> 15 ---> NULL

**Reversed Linked List:**

15 ---> 14 ---> 13 ---> 12 ---> NULL

