#include<stdio.h>
#include<stdlib.h>
int stack[5];
int top = -1;

void push(int data){
    if(top == 4)
        printf("Stack Overflow! Cannot insert.\n");
    else
        stack[++top] = data;
}

void pop(){
    if(top == -1)
        printf("Underflow! Stack is empty.\n");
    else
        printf("Deleted element: %d\n", stack[top--]);
}

void peek(){
    if(top == -1)
        printf("Stack is empty.\n");
    else
        printf("Top element: %d\n", stack[top]);
}

void display(){
    if(top == -1)
        printf("Stack is empty.\n");
    else {
        printf("Stack elements:\n");
        for(int i = top; i >= 0; i--)
            printf("%d\n", stack[i]);
    }
}

int main(){
    int choice, value;
    while(1){
        printf("\n1.Push  2.Pop  3.Peek  4.Display  5.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1: printf("Enter value: "); scanf("%d", &value); push(value); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
}
