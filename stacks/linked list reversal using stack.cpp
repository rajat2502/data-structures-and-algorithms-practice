#include <iostream>
#include <stack>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head;

void InsertAtStart(int x){
    Node* temp = (Node*)malloc(sizeof(struct Node));
    temp->data = x;
    if(head == NULL){
        head = temp;
        temp->next = NULL;
        return;
    }
    temp->next = head;
    head = temp;
}

void Print(){
    struct Node* temp = head;
    printf("List: ");
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void Reverse(){
    Node* temp = head;
    stack<Node*> s;
    while(temp != NULL){
        s.push(temp);
        temp = temp->next;
    }
    temp = s.top();
    head = temp;
    s.pop();
    while(!s.empty()){
        temp->next = s.top();
        s.pop();
        temp = temp->next;
    }
    temp->next = NULL;
}

int main() {
    head = NULL;
    InsertAtStart(4);
    InsertAtStart(3);
    InsertAtStart(2);
    InsertAtStart(1);
    Print();
    Reverse();
    Print();
	return 0;
}