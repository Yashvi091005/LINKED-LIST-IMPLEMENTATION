# LINKED-LIST-IMPLEMENTATION

*COMPANY*: CODTECHIT SOLUTIONS

*NAME*: YASHVI BHALA

*INTERNID*: YASHVI38684

*DOMAIN*: C-LANGUAGE

*DURATION*: 4 WEEKS

*MENTOR*: NEELA SANTOSH

##REPORT ON LINKED LIST IMPLEMENTATION IN C
1. Title of the Program
Singly Linked List in C

2. Objective
To implement a basic singly linked list in C language that allows insertion of nodes and deletion of a node by value, while demonstrating dynamic memory allocation and pointer manipulation.

3. Tools & Technologies Used
Programming Language: C

Compiler: GCC (GNU Compiler Collection)

IDE/Code Editor: Visual Studio Code (VS Code)

Extensions: C/C++, Code Runner (for easy compile/run support)

Standard Libraries:

<stdio.h> – for standard input/output functions

<stdlib.h> – for dynamic memory management (malloc, free, etc.)

4. Description of the Program
This program provides a practical demonstration of a singly linked list using structures and dynamic memory allocation in the C programming language.

A linked list is a linear data structure consisting of nodes, where each node contains a data value and a pointer to the next node. Unlike arrays, linked lists provide dynamic memory usage and are useful for frequent insertions and deletions.

Functionality Covered:
Creating Nodes Dynamically

The user enters how many nodes to insert.

Each node is dynamically allocated memory using malloc().

Inserting Nodes at the End

Using the function insertAtEnd(), the program appends nodes at the end of the list.

This function iterates through the list and attaches the new node to the last one.

Traversing the List

The traverseList() function prints all node values sequentially from head to tail.

Deleting a Node by Value

Users can choose whether or not to delete a node.

If selected, deleteByValue() deletes the first node matching the specified value, if it exists.

Freeing Memory

At the end, freeList() deallocates memory to prevent memory leaks.

All functions use pointer manipulation to modify the list in-place efficiently.

5. Program Workflow
User inputs the number of nodes to be inserted.

User enters the data values for each node.

Program builds and displays the initial linked list.

User is asked if they want to delete a node.

If yes, deletion is performed, and the updated list is shown.

Memory is freed before exiting.

6. Applications & Use Cases
Core Data Structure Practice: Useful for understanding how pointers and dynamic memory work in C.

Foundational in Competitive Coding: Linked lists are a common topic in coding interviews.

Used in Real Systems: Underlying structure in stacks, queues, hash tables, memory management systems, and more.

Dynamic Storage: Useful where the size of the data structure isn't known at compile time.

7. Advantages
Dynamic Size: Memory is allocated as needed.

Efficient Insert/Delete: Especially in cases where operations happen frequently at the beginning or middle.

Hands-on Pointer Practice: Helps solidify understanding of pointers and memory allocation in C.

8. Conclusion
The linked_list.c program successfully demonstrates the implementation of a singly linked list using dynamic memory allocation in C. It showcases important concepts such as node creation, pointer manipulation, insertion at the end, deletion by value, and traversal. Written and executed using Visual Studio Code with the GCC compiler, this program serves as a valuable practice for mastering linked lists and low-level data structures.

#OUTPUT: 
