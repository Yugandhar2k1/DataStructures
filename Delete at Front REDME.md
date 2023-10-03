## Data Structure

- A `struct node` is defined to represent a node in a singly linked list. Each node has two members:
  - An integer `data` to store the data.
  - A pointer `next` to point to the next node in the list.

## InsertAtFront Function

- `InsertAtFront` is a function that inserts a new node with the provided data at the front of the linked list.
- **Arguments**:
  - `struct node **head`: A pointer to a pointer to the head of the list, allowing the function to update the head.
  - `int data`: The integer data to be inserted.
- **Inside the function**:
  - Memory is dynamically allocated for a new node using `malloc`.
  - It checks if the memory allocation was successful. If not, it prints an error message and exits the program.
  - The `data` field of the new node is set to the provided data.
  - The `next` field of the new node is updated to point to the current head of the list.
  - The head pointer is updated to point to the new node.
  - The function returns 0 to indicate a successful insertion.

## DeleteAtFront Function

- `DeleteAtFront` is a function that deletes the node at the front of the linked list.
- **Argument**:
  - `struct node **head`: A pointer to a pointer to the head of the list.
- **Inside the function**:
  - It checks if the linked list is empty (head is NULL). If so, it prints a message and returns 1 to indicate failure.
  - A temporary pointer `temp` is used to hold the current head.
  - The head pointer is updated to point to the next node (effectively removing the front node).
  - The memory of the deleted node is freed using `free`.
  - The function returns 0 to indicate a successful deletion.

## PrintLinkedList Function

- `PrintLinkedList` is a function responsible for printing the elements of the linked list.
- **Argument**:
  - `struct node* p`: A pointer to the head of the list.
- **Inside the function**:
  - A while loop is used to traverse the list, printing each node's data value followed by " ---> ".
  - When it reaches the end of the list (where `p` becomes NULL), it prints "NULL" to indicate the end of the list.

## Main Function

- The `main` function is where program execution begins.
- It initializes the head pointer to NULL, indicating an empty linked list.
- The user is prompted to enter the number of nodes to create (node) and the data value to insert at the front (data).
- A for loop is used to create nodes and insert them at the front of the linked list based on user input.
- The `PrintLinkedList` function is called to print the linked list before inserting at the front.
- A new node with the provided data is inserted at the front.
- The linked list's state is printed after the insertion.
- The front node is deleted, and the linked list's state is printed again.

## Output Explanation

- The program first asks the user to create a linked list with 3 nodes and insert the data 42 at the front.
- Then it prompts the user to input data values for the 3 nodes (10, 20, 30).
- It prints the linked list before inserting at the front, which shows the initial state.
- After inserting at the front (42), it displays the updated state.
- Finally, it deletes the front node (10) and prints the list again.
- The output demonstrates the linked list's state before and after inserting data at the front and also shows the effect of deleting the front node.
## User Input

- **Enter the number of nodes you want to create:** 3
- **Enter the number of data you want to insert:** 42
- **Enter the data value for node 1:** 10
- **Enter the data value for node 2:** 20
- **Enter the data value for node 3:** 30

## Output

**Before inserting at front:**

- 10 ---> 20 ---> 30 ---> NULL

**After inserting at front:**

- 42 ---> 10 ---> 20 ---> 30 ---> NULL

**Deleting at front:**

- 10 ---> 20 ---> 30 ---> NULL
