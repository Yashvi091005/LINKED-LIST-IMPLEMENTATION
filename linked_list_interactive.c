/*
 * linked_list.c
 *
 * This program implements a singly linked list in C.
 * It allows the user to insert nodes into the list, and then optionally delete a node.
 *
 * To compile: gcc linked_list.c -o linked_list
 * To run: ./linked_list
 */

#include <stdio.h>
#include <stdlib.h>

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
    Node *head = NULL;
    int n, value, delValue;
    char choice;

    printf("How many nodes do you want to insert? ");
    scanf("%d", &n);

    // Inserting nodes based on user input
    for (int i = 0; i < n; i++)
    {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);
        insertAtEnd(&head, value);
    }

    printf("\nLinked List after insertion:\n");
    traverseList(head);

    // Ask user if they want to delete a node
    printf("\nDo you want to delete a node? (y/n): ");
    scanf(" %c", &choice);
    if (choice == 'y' || choice == 'Y')
    {
        printf("Enter a value to delete from the list: ");
        scanf("%d", &delValue);
        deleteByValue(&head, delValue);
        printf("\nLinked List after deletion:\n");
        traverseList(head);
    }
    else
    {
        printf("Skipping deletion.\n");
    }

    // Free the memory allocated for the linked list
    freeList(head);
    return 0;
}

// Create a new node with the given data
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

// Insert a node at the end of the list
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
        temp = temp->next;
    temp->next = newNode;
}

// Delete the first node with the given value
void deleteByValue(Node **head, int value)
{
    Node *temp = *head, *prev = NULL;
    if (temp != NULL && temp->data == value)
    {
        *head = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != value)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
    {
        printf("Value %d not found in the list.\n", value);
        return;
    }
    prev->next = temp->next;
    free(temp);
}

// Traverse and display the list
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

// Free all nodes in the list
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
