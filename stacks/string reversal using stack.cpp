#include <bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;

void reverseString(char *c, int n){
    stack<char> s;
    for(int i=0; i<n; i++){
        s.push(c[i]);
    }
    // loop for pop
    for(int i=0; i<n; i++){
        c[i] = s.top();
        s.pop();
    }
}

int main() {
    char c[51];
    printf("Enter a String: ");
    scanf(" %s", c);
    reverseString(c, strlen(c));
    printf("\nOutput: %s", c);
	return 0;
}