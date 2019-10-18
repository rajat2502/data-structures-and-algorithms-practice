#include <iostream>
using namespace std;

int Pow(int x, int n) {
    if(n == 0) {
        return 1;
    }
    else if(n % 2 == 0) {
        int y = Pow(x, n/2);
        return y*y;
    }
    else {
        return x*Pow(x, n-1);
    }
}

int main() {
    int x, k;
    cin>>x>>k;
	int result = Pow(x, k);
	cout<<result<<endl;
	return 0;
}