#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node *next;
};


void insertMiddle(struct Node *head, int position, int value) {
    struct Node *newNode, *temp;
    int i = 1;

    temp = head;


    while (i < position && temp != NULL) {
        temp = temp->next;
        i++;
    }

    if (temp == NULL) {
        printf("Position out of range!\n");
        return;
    }


    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;

    newNode->next = temp->next;
    temp->next = newNode;

    printf("Item inserted in middle.\n");
}


void printList(struct Node *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;   head->next = second;
    second->data = 20; second->next = third;
    third->data = 30;  third->next = NULL;

    printf("Original Linked List:\n");
    printList(head);


    insertMiddle(head, 2, 25);

    printf("Updated Linked List:\n");
    printList(head);

    return 0;
}
