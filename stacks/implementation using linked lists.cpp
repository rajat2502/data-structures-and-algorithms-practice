#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

struct Node* top;

void Push(int x){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = top;
    top = temp;
}

void Pop(){
    struct Node* temp = top;
    top = temp->next;
    free(temp);
}

void Print(){
    struct Node* temp = top;
    printf("Stack: ");
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    top = NULL;
    Push(3);
    Push(2);
    Push(1);
    Pop();
    Push(0);
    Print();
	return 0;
}