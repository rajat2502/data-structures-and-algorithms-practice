#include <iostream>
using namespace std;

int F[51]; //can store a max of fact(51)

int Fib(int n) {
    if(n <= 1) {
        return n;
    }
    if(F[n] != -1) {
        return F[n];
    }
    F[n] = Fib(n-1) + Fib(n-2);
    return F[n];
}

int main() {
    for(int i=0; i<51; i++) {
        F[i] = -1;
    }
	int n;
	cin>>n;
	int result = Fib(n);
	cout<<result<<endl;
	return 0;
}