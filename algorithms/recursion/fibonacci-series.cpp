#include <iostream>
using namespace std;

int Fib(int n) {
    if(n <= 1) {
        return n;
    }
    return Fib(n-1) + Fib(n-2);
}

int main() {
	int n;
	cin>>n;
	int result = Fib(n);
	cout<<result<<endl;
	return 0;
}