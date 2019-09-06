#include <iostream>
using namespace std;

#define N 10
int A[N];
int front = -1, rear = -1;

int IsEmpty(){
    if(front == -1 && rear == -1) return 1;
    return 0;
}

int Front(){
    return A[front];
}

int IsFull(){
    if((rear + 1) % N == front) return 1;
    return 0;
}

void Enqueue(int x){
    if(IsFull()) return;
    else if(IsEmpty()){
        front = 0;
        rear = 0;
    }
    else{
        rear = (rear + 1) % N;
    }
    A[rear] = x;
}

void Dequeue(){
    if(IsEmpty()) return;
    else if(front == rear){
        front = rear = -1;
    }
    else{
        front = (front + 1) % N;
    }
}



int main() {
	Enqueue(2);
	Enqueue(1);
	Enqueue(1);
	Enqueue(3);
	Dequeue();
	for(int i = front; i<=rear; i++) cout<<A[i]<<" ";
	return 0;
}