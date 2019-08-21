#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  struct Node* next;
};

struct Node* head;

void insert(int x){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;
    if(head != NULL){
        struct Node* temp1 = head;
        while(temp1->next != NULL){
            temp1 = temp1->next;
        }
        temp1->next = temp;
    }
    else{
        head = temp;
    }
}

void print(){
    struct Node* temp;
    temp = head;
    printf("List is:");
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
	head = NULL;
	int i, n, x;
	printf("how many numbers?");
	scanf("%d", &n);
	for(i=0; i<n; i++){
	    printf("enter the number");
	    scanf("%d", &x);
	    insert(x);
	    print();
	}
	return 0;
}
