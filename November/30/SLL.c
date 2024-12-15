#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node* createNode(int data){
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}
void insertAtFirst(struct Node** head, int data){
    struct Node *newnode = createNode(data);
    newnode->next = *head;
    *head = newnode;
}
void insertAtEnd(struct Node** head, int data){
    struct Node *newnode = createNode(data);
    if (*head == NULL){
        *head = newnode;
        return;
    }
    struct Node* temp = *head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
}
void insertAtPosition(struct Node** head, int data, int position){
    struct Node* newnode = createNode(data);
    if(position == 0) {
        insertAtFirst(head,data);
        return;
    }
    struct Node* temp = *head;
    for(int i = 0; temp != NULL && i < position-1; i++){
        temp = temp->next;
    }
    if(temp == NULL){
        printf("Position out of range\n");
        free(newnode);
        return;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}
void deleteFromEnd(struct Node** head){

}
void Display(struct Node *head){
    struct Node *temp = head;
    while (temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    struct Node* head = NULL;
    insertAtFirst(&head, 10);
    insertAtEnd(&head, 30);
    insertAtPosition(&head,20,1);
    Display(head);
    return 0;
}