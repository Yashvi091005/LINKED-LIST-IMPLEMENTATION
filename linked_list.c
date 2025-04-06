/*
 * linked_list.c
 *
 * This file implements a singly linked list in C.
 * It includes functions to insert nodes at the end, delete a node by value,
 * and traverse the list to print its contents.
 *
 * To compile: gcc linked_list.c -o linked_list
 * To run: ./linked_list
 */

#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
typedef struct Node
{
    int data;
    struct Node *next;
} Node;

// Function declarations
Node *createNode(int data);
void insertAtEnd(Node **head, int data);
void deleteByValue(Node **head, int value);
void traverseList(Node *head);
void freeList(Node *head);

int main()
{
    Node *head = NULL; // Start with an empty list

    // Insert nodes with sample data
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);

    printf("Linked List after insertion:\n");
    traverseList(head);

    // Delete the node with value 20
    printf("\nDeleting node with value 20...\n");
    deleteByValue(&head, 20);

    printf("Linked List after deletion:\n");
    traverseList(head);

    // Free the memory allocated for the list
    freeList(head);

    return 0;
}

// Create a new node with the specified data
Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (!newNode)
    {
        perror("Memory allocation error");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Insert a new node at the end of the list
void insertAtEnd(Node **head, int data)
{
    Node *newNode = createNode(data);
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    Node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Delete the first node that has the given value
void deleteByValue(Node **head, int value)
{
    Node *temp = *head, *prev = NULL;

    // If the head node contains the target value
    if (temp != NULL && temp->data == value)
    {
        *head = temp->next;
        free(temp);
        return;
    }

    // Find the node to be deleted, keeping track of the previous node
    while (temp != NULL && temp->data != value)
    {
        prev = temp;
        temp = temp->next;
    }

    // If the value was not found, print a message
    if (temp == NULL)
    {
        printf("Value %d not found in the list.\n", value);
        return;
    }

    // Unlink the node and free its memory
    prev->next = temp->next;
    free(temp);
}

// Print all the nodes in the list
void traverseList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Free all nodes to avoid memory leaks
void freeList(Node *head)
{
    Node *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}
