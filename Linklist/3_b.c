//Deleting a node from the end of the list

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL; // Global Head Pointer

// Insert at Beginning
void insert_Beg(int data){
    struct node *new_node;
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = data; // Insert Node Data Part

    new_node->next = head; // Connect new node with old head
    head = new_node;       // Update head pointer
}

// Delete from End
void delete_End(){
    struct node *temp, *prev;

    // Case 1: List is empty
    if(head == NULL){
        printf("\nList is empty, nothing to delete!\n");
        return;
    }

    // Case 2: Only one node
    if(head->next == NULL){
        printf("\nDeleted node = %d\n", head->data);
        free(head);
        head = NULL;
        return;
    }

    // Case 3: More than one node
    temp = head;
    while(temp->next != NULL){
        prev = temp;          // Keep track of previous node
        temp = temp->next;    // Move to next node
    }

    printf("\nDeleted node = %d\n", temp->data);
    prev->next = NULL;  // Disconnect last node
    free(temp);          // Free last node
}

// Display Function
void display_node(){
    struct node *temp;
    temp = head;
    printf("\nHead = %p\n", head);
    printf("Singly Linked List Nodes are ->\n");

    while(temp != NULL){
        printf("|%d : %p|  ", temp->data, temp->next);
        temp = temp->next;
    }
    printf("\n");
}

// Main Function
int main(){
    insert_Beg(4);
    insert_Beg(3);
    insert_Beg(2);
    insert_Beg(1);

    printf("Initial Linked List:\n");
    display_node();

    delete_End();
    printf("\nList after deleting from end:\n");
    display_node();

    delete_End();
    printf("\nList after another deletion:\n");
    display_node();

    return 0;
}
