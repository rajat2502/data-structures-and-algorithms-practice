#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* head;

struct Node* createNode(int x){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void InsertAtHead(int x){
    struct Node* newNode = createNode(x);
    if(head == NULL){
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}

void InserAtEnd(int x){
    struct Node* newNode = createNode(x);
    struct Node* temp = head;
    while( temp->next != NULL ){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void Print(){
    struct Node* temp = head;
    printf("forward: ");
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void ReversePrint(){
    struct Node* temp=head;
    if(head == NULL) return;
    while(temp->next != NULL){
        temp=temp->next;
    }
    printf("Reverse: ");
    while(temp != NULL){
        printf("%d ", temp->data);
        temp=temp->prev;
    }
    printf("\n");
}

int main() {
    head = NULL;
    InsertAtHead(3);
    InsertAtHead(2);
    InsertAtHead(1);
    InserAtEnd(4);
    InserAtEnd(5);
    Print();
    ReversePrint();
	return 0;
}