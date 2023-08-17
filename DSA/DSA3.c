#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Node structure for the linked list
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Stack structure
typedef struct {
    Node* top;
} Stack;

// Function to initialize the stack
void initialize(Stack* stack) {
    stack->top = NULL;
}

// Function to check if the stack is empty
bool isEmpty(Stack* stack) {
    return stack->top == NULL;
}

// Function to push an element onto the stack
void push(Stack* stack, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data = value;
    newNode->next = stack->top;
    stack->top = newNode;
}

// Function to pop an element from the stack
int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow\n");
        return -1; // You can choose a different value to represent underflow
    }
    Node* temp = stack->top;
    int value = temp->data;
    stack->top = temp->next;
    free(temp);
    return value;
}

// Function to get the top element of the stack without popping it
int peek(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return -1; // You can choose a different value to represent empty stack
    }
    return stack->top->data;
}

// Function to free the memory used by the stack
void cleanup(Stack* stack) {
    while (!isEmpty(stack)) {
        pop(stack);
    }
}

int main() {
    Stack stack;
    initialize(&stack);

    int choice, value;

    do {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(&stack, value);
                break;
            case 2:
                value = pop(&stack);
                if (value != -1)
                    printf("Popped: %d\n", value);
                break;
            case 3:
                value = peek(&stack);
                if (value != -1)
                    printf("Top element: %d\n", value);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 4);

    cleanup(&stack);

    return 0;
}
