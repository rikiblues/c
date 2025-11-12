//Inserting a code to delete a node from a specified position
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
    new_node->data = data; //Insert Node Data Part

    new_node->next = head; //Connect Node_1 with 2
    head = new_node;       //Update head
}

// Delete node from a specified position
void delete_Pos(int pos){
    struct node *temp, *prev;
    int i;

    // Case 1: If list is empty
    if(head == NULL){
        printf("\nList is empty, nothing to delete!\n");
        return;
    }

    // Case 2: If position is 1 (delete first node)
    if(pos == 1){
        temp = head;
        head = head->next;
        printf("\nDeleted node = %d (from position %d)\n", temp->data, pos);
        free(temp);
        return;
    }

    // Case 3: Traverse to (pos - 1)th node
    temp = head;
    for(i = 1; i < pos && temp != NULL; i++){
        prev = temp;
        temp = temp->next;
    }

    // If position is invalid
    if(temp == NULL){
        printf("\nInvalid position %d! (List may be shorter)\n", pos);
        return;
    }

    // Disconnect and free node
    prev->next = temp->next;
    printf("\nDeleted node = %d (from position %d)\n", temp->data, pos);
    free(temp);
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

    delete_Pos(2);
    printf("\nList after deleting node at position 2:\n");
    display_node();

    delete_Pos(1);
    printf("\nList after deleting node at position 1:\n");
    display_node();

    delete_Pos(10); // Invalid position
    printf("\nList after trying to delete invalid position:\n");
    display_node();

    return 0;
}
