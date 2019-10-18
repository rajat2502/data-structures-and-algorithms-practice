#include <iostream>
using namespace std;

int Fact(int n) {
    if(n == 0) {
        return 1;
    }
    return n*Fact(n-1);
}

int main() {
	int n;
	cin>>n;
	int result = Fact(n);
	cout<<result<<endl;
	return 0;
}