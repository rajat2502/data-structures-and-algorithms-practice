#include <iostream>
using namespace std;

void InsertionSort(int a[], int n){
    int i, j, temp, index;
    for(i=1; i<=n-1; i++){
        temp = a[i];
        index = i;
        while(index > 0 && a[index-1] > temp){
            a[index] = a[index-1];
            index--;
        }
        a[index] = temp;
    }
}

int main() {
	int n, i;
	cin>>n;
	int a[n];
	for(i=0; i<n; i++){
	    cin>>a[i];
	}
	InsertionSort(a, n);
	for(i=0; i<n; i++){
	    cout<<a[i]<<" ";
	}
	return 0;
}