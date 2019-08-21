#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head;

void Insert(int x, int n){
    struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
    temp1->data = x;
    temp1->next = NULL;
    if(n == 1){
        temp1->next = head;
        head = temp1;
        return;
    }
    struct Node* temp;
    temp = head;
    for(int i; i<n-2; i++){
        temp = temp->next;
    }
    temp1->next = temp->next;
    temp->next = temp1;
}

void print(){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main() {
	head = NULL;
	Insert(2,1);
	Insert(3,2);
	Insert(4,1);
	Insert(5,2);
	printf("List is:");
	print(); //list should be 4, 5, 2, 3
	return 0;
}
