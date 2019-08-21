#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

struct Node* head; //globally declared head variable

// to insert an element to the list
void insert(int x){
    Node* temp = new Node();
    temp -> data = x;
    temp -> next = head;
    head = temp;
}

//to print the list
void print(){
    Node* temp = head;
    cout<<"List is :";
    while(temp != NULL){
        cout<<temp -> data<< " ";
        temp = temp -> next;
    }
    cout<<"\n";
}
int main() {
	head = NULL;
	int i, n, number;
	cout<<"how many numbers"<<endl;
	cin>>n;
	for(i=0; i<n; i++){
	    cin>>number;
	    insert(number);
	    print();
	}
}
