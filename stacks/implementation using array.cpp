#include <iostream>
using namespace std;

#define MAX_SIZE 100
int A[MAX_SIZE];
int top = -1;

void Push(int x){
    if(top == MAX_SIZE-1){
        printf("Error: Stack Overflow");
        return;
    }
    A[++top] = x;
}

void Pop(){
    if(top == -1){
        printf("Error: No Elements To Pop");
        return;
    }
    top--;
}

int Top(){
    return A[top];
}

bool IsEmpty(){
    if(top == -1) return true;
    else false;
}

int main() {
    Push(3);
	Push(1);
	Push(2);
	Pop();
	Push(5);
	int a = Top();
	cout<<a<<endl;
	return 0;
}