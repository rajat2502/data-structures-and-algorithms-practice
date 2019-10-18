#include <iostream>
using namespace std;

int Mod(int x, int n, int m) {
    if(n == 0) {
        return 1;
    }
    else if(n % 2 == 0) {
        int y = Mod(x, n/2, m);
        return (y*y) % m;
    }
    else {
        return ((x % m)*Mod(x, n-1, m) % m);
    }
}

int main() {
    int x, k, m;
    cin>>x>>k>>m;
	int result = Mod(x, k, m);
	cout<<result<<endl;
	return 0;
}